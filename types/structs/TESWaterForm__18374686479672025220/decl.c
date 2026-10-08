struct TESWaterForm
{
TESFormVtbl *vtbl;
TESFormMembr super;
TESAttackDamageForm damageForm;
TESTexture texture;
UInt8 opacity;
WaterType waterType;
UInt8 pad2E[2];
UInt32 unk30;
UInt16 unk34;
UInt16 unk36;
TESSound *loopSound;
float waterSimVals[11];
RGBA shallowColor;
RGBA deepColor;
RGBA reflectionColor;
UInt32 textureBlend;
float rainSimVals[5];
float displacementSimVals[5];
UInt32 unkA0[3];
};
