0x628220: mov     ax, [esp+action]; Stores the 16-bit current action at HighProcess+0x1F4 and its BSAnimGroupSequence pointer at +0x1F8; returns the stored action in AX.
0x628225: mov     edx, [esp+sequence]
0x628229: mov     [ecx+1F4h], ax; HighProcess::SetCurrentAction is a plain store of the signed action ID; it has no timer, sequence-end test, or automatic follow-through clear.
0x628230: mov     [ecx+1F8h], edx; Store the associated BSAnimGroupSequence pointer unchanged; the post-release 5->3 call passes the current action sequence.
0x628236: retn    8
