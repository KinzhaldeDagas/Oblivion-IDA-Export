struct EffectSetting
{
TESForm super;
TESModel model;
TESDescription description;
TESFullName fullName;
TESIcon texture;
UInt32 unk0[2];
UInt32 effectFlags;
float baseCost;
UInt32 data;
UInt32 school;
UInt32 resistValue;
UInt16 numCounters;
UInt16 pad06E;
TESObjectLIGH *light;
float projSpeed;
TESEffectShader *effectShader;
TESEffectShader *enchantEffect;
TESSound *castingSound;
TESSound *boltSound;
TESSound *hitSound;
TESSound *areaSound;
float enchantFactor;
float barterFactor;
UInt32 effectCode; ///<  Verified 4-byte effect-code value read at EffectSetting+0x98 by ActiveEffect_Base_CreateDynamic and used as the ActiveEffectCreatorMap key. Observed FourCCs include registered codes CALM/CHML/COCR/COHU/DARK/DEMO/DTCT/DIAR/DIWE/DSPL/FRNZ/INVI/LGHT/LOCK/NEYE/OPEN/PARA/REAN/STRP/SUDG/TELE/TURN/VAMP, plus built-in fallback codes; the full code universe is not declared by this partial observation.
UInt32 *counterArray;
UInt32 unk4[2];
};
