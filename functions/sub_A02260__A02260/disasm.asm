0xA02260: push    offset stru_B3CCB0; parent
0xA02265: push    offset aNitransformcon; "NiTransformController"
0xA0226A: mov     ecx, offset unk_B3CA58; this
0xA0226F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA02274: retn
