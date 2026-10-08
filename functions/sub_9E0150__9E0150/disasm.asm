0x9E0150: push    offset parent; parent
0x9E0155: push    offset aBsscissornode; "BSScissorNode"
0x9E015A: mov     ecx, 0B3529Ch; this
0x9E015F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9E0164: retn
