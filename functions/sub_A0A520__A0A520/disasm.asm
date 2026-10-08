0xA0A520: push    offset stru_B3FACC; parent
0xA0A525: push    offset aNiscreenspacec; "NiScreenSpaceCamera"
0xA0A52A: mov     ecx, offset stru_B40138; this
0xA0A52F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A534: retn
