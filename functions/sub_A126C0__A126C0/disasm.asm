0xA126C0: push    offset stru_BA7F60; parent
0xA126C5: push    offset aBhkaabbphantom; "bhkAabbPhantom"
0xA126CA: mov     ecx, offset stru_BA8030; this
0xA126CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA126D4: retn
