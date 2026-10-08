0x9F8EB0: push    offset stru_B39D98; parent
0x9F8EB5: push    offset aBsfacegenmor_1; "BSFaceGenMorphDataHair"
0x9F8EBA: mov     ecx, offset stru_B39DA8; this
0x9F8EBF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9F8EC4: retn; Registers RTTI for BSFaceGenMorphDataHair, the morph-data object used by BSFaceGen_ApplyHairLengthMorph.
