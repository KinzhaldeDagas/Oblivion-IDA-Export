0x88E850: push    esi
0x88E851: mov     esi, ecx
0x88E853: mov     dword ptr [esi], offset ??_7bhkBlendCollisionObjectAddRotation@@6B@; const bhkBlendCollisionObjectAddRotation::`vftable'
0x88E859: call    sub_88EA60
0x88E85E: test    byte ptr [esp+4+arg_0], 1
0x88E863: jz      short loc_88E86E
0x88E865: push    esi
0x88E866: call    FormHeapFree
0x88E86B: add     esp, 4
0x88E86E: mov     eax, esi
0x88E870: pop     esi
0x88E871: retn    4
