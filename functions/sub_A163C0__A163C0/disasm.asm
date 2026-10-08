0xA163C0: push    0; parent
0xA163C2: push    offset aNid3dshadercon; "NiD3DShaderConstantMap"
0xA163C7: mov     ecx, offset stru_BAA944; this
0xA163CC: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA163D1: retn
