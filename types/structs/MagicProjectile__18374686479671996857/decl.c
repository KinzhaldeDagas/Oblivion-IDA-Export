struct MagicProjectile
{
MobileObject super;
float speed;
float distanceTraveled;
float elapsedTime;
MagicCaster *caster;
MagicItem *magicItem;
UInt32 effectCode;
EffectSetting *effectSetting;
};
