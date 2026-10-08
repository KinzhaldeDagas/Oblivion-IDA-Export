0x9F8ED0: push    offset parent; parent
0x9F8ED5: push    offset aBsfacegennin_1; "BSFaceGenNiNode"
0x9F8EDA: mov     ecx, offset stru_B39DB8; this
0x9F8EDF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9F8EE4: retn
