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
		atAtk = 0,//攻击
		atAtkSpeed,//攻速
		atMoveSpeed,//移速
		atSkillEnhance,//技能增强
		atManaRenew,//精神（魔法值）恢复
		atManaDiscount,//精神消耗和损失打折
		atMagic,//法力
		atHit,//命中
		atArmor,//护甲
		atPhyResist,//物理抗性
		atMagicResist,//法术抗性
		atStatusResist,//状态抗性
		atDodge,//闪避
		atHp,//生命值
		atHpRenew,//生命恢复
	};
}