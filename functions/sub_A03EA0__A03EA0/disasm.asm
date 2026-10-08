0xA03EA0: push    offset stru_B3F684; parent
0xA03EA5: push    offset aNiuvdata; "NiUVData"
0xA03EAA: mov     ecx, offset stru_B3D86C; this
0xA03EAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA03EB4: retn
