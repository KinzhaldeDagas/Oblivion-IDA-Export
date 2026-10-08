struct TESObjectLIGH_DecodedLayout
{
unsigned __int8 base_00[112];
int time_70; ///< Native LIGH time/duration field.
unsigned int radius_74; ///< Native light radius; passed in EAX to NiPointLight_ConfigureAttenuationFromLightRadius.
unsigned int colorRgb_78; ///< Packed RGB color used to seed NiLight diffuse/specular color.
unsigned int lightFlags_7C; ///< Oblivion LIGH DATA flags. Retail game consumers prove: 0x02 Can carry gates activation/pickup; 0x04 Negative negates point-light RGB; 0x20 Off by default suppresses the normal non-actor attached-light path; 0x08/0x40 select Flicker/Flicker Slow; 0x80/0x100 select Pulse/Pulse Slow. Construction Set Light dialog 156 supplies the exact labels Dynamic=0x01, Can carry=0x02, Negative=0x04, Flicker=0x08, Off by default=0x20, Flicker Slow=0x40, Pulse=0x80, Pulse Slow=0x100, Spot Light=0x200, Spot Shadow=0x400. The decoded retail reference-light registration at 0x004D80C0 does not read this flag word and explicitly sets ShadowSceneLight projector mode false and renderGateOverride_120=0; the editor Spot labels therefore are not proof of an active retail projected-shadow producer.
float falloffExponent_80; ///< Falloff exponent field decoded from the Oblivion LIGH record and projector path.
float projectorFovDegrees_84; ///< Projector field of view in degrees; native projected-light setup clamps it before use.
float fade_88; ///< Fade/dimmer base loaded from and saved to the FNAM subrecord. Seeds NiLight::m_fDimmer and retargets AttachedLightPayload_Decoded::targetDimmer_04.
void *soundForm_8C; ///< Linked sound form loaded from the SNAM subrecord.
};
