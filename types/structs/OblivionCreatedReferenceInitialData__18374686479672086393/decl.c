struct OblivionCreatedReferenceInitialData
{
OblivionCreatedReferenceKind kind; ///< Verified: 36-byte payload read by LoadGame at 465EB1..465ED6.
unsigned int boundFormIDOrVariant; ///< Verified: kind value tested at +0; branch 1 allocates ArrowProjectile, 2 selects a MagicProjectile subtype, 0/3 feed standard TESObjectREFR construction/reuse at 4603E0.
unsigned int locationFormID; ///< Candidate: value is passed through the saved-form-ID resolver at 465EE2; its meaning is bound-form ID for normal references and may be type-dependent for projectiles.
float positionX; ///< Verified: +8 is resolved as FormID and looked up/cast as TESObjectCELL or TESWorldSpace at 465EEB..465F3F.
float positionY; ///< Verified: +0xC,+0x10,+0x14 are finite-checked as a NiPoint3 and X/Y select a worldspace cell at 465F47..465F92.
float positionZ; ///< Candidate: trailing 12 bytes at +0x18 resemble an angle vector; no Oblivion-side read of these bytes has been established. Fallout uses a separate ReferenceLocationInitialData plus compact type/bound-ID suffix.
float unknown18[3];
};
