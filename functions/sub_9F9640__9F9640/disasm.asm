0x9F9640: push    offset parent; parent
0x9F9645: push    offset aBstreenode; "BSTreeNode"
0x9F964A: mov     ecx, 0B3A02Ch; this
0x9F964F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9F9654: retn
