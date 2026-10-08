struct AttachedLightPayload_Decoded
{
NiLight *backingLight_00; ///< Strong-owned backing NiLight. Set/replaced with intrusive reference counting and released during payload replacement/removal.
float targetDimmer_04; ///< Target fade/dimmer state. Both ordinary ExtraLight (0x30) and spell-effect ExtraLight (0x49) creators initialize it to 1.0; TESObjectLIGH_UpdateAttachedLightState moves NiLight::m_fDimmer (+0xDC) toward it and retargets it from TESObjectLIGH::fade_88 for native pulse/flicker modes.
};
