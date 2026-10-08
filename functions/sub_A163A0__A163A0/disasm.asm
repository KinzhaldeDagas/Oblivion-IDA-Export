0xA163A0: push    offset stru_BAA944; parent
0xA163A5: push    offset aNid3dscm_verte; "NiD3DSCM_Vertex"
0xA163AA: mov     ecx, offset stru_BAA920; this
0xA163AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA163B4: retn
