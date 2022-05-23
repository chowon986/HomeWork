#include "GameEngineCore.h"
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngineBase/GameEngineInput.h>
#include <GameEngineBase/GameEngineTime.h>
#include "GameEngineLevel.h"

// Resources Header
#include "GameEngineVertexBuffer.h"
#include "GameEngineIndexBuffer.h"

void GameEngineCore::EngineResourcesInitialize()
{
	// �簢�� �ڽ� ������ �ؽ�ó ���
	// �������ؿ��� �⺻������ ������� �Ѵٰ� �����ϴ�
	// ���ҽ����� �̴ϼȶ������ϴ� �ܰ�


	{   
		//     0
		// 5       1

		//    ����
		
		// 4       2
		//     3

		std::vector<float4> Vertex;
		Vertex.push_back(float4(0.0f, -1.0f));
		Vertex.push_back(float4(0.85f, -0.5f));
		Vertex.push_back(float4(0.85f, 0.5f));
		Vertex.push_back(float4(0.0f, 1.0f));
		Vertex.push_back(float4(-0.85f, 0.5f));
		Vertex.push_back(float4(-0.85f, -0.5f));

		GameEngineVertexBuffer::Create("Star", Vertex);
	}

	{
		// 0       1

		//    ����

		// 3       2

		std::vector<int> Index;

		// ù��° �ﰢ��
		// ����Ʈ �����ڷ� ���ڸ� �ڿ� �߰����ִ� ��� �߰� �Լ�.
		Index.resize(6);

		// ù��°
		Index[0] = 0;
		Index[1] = 2;
		Index[2] = 4;

		// �ι�°
		Index[3] = 1;
		Index[4] = 3;
		Index[5] = 5;

		GameEngineIndexBuffer::Create("Star", Index);
	}


}


void GameEngineCore::EngineResourcesDestroy()
{
	GameEngineVertexBuffer::ResourcesDestroy();
	GameEngineIndexBuffer::ResourcesDestroy();
}