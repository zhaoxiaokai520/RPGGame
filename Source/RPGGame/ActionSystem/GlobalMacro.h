#pragma once

namespace NS_Battle
{
	// meta action type
	enum MActionType
	{
		mtAttribute,//update attribute

		mtAnimation,//play a animation

		mtParticle,// show particle effect

		mtAI,//update AI engine

		mtSearchTargets,

		mtTrack,//calculate move track step

		mtStatus,//abnormal status

		mtCD,//action cd

		mtUI,//update UI

		mtMovement,//do smooth move

		mtRayCollision,
		mtBoxCollision,
		mtSphereCollision,

		mtTimer,
	};

	//Track Type
	enum {
		ttLine,
		ttParacurve,
	};

	//pawn attribute type
	enum {
		atAtk = 0,//����
		atAtkSpeed,//����
		atMoveSpeed,//����
		atSkillEnhance,//������ǿ
		atManaRenew,//����ħ��ֵ���ָ�
		atManaDiscount,//�������ĺ���ʧ����
		atMagic,//����
		atHit,//����
		atArmor,//����
		atPhyResist,//������
		atMagicResist,//��������
		atStatusResist,//״̬����
		atDodge,//����
		atHp,//����ֵ
		atHpRenew,//�����ָ�
	};
}