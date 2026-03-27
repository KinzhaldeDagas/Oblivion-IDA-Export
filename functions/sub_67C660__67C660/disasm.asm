0x67C660: sub     esp, 0Ch
0x67C663: push    esi
0x67C664: mov     esi, ecx
0x67C666: fld     dword ptr [esi+48h]
0x67C669: fld     qword ptr ds:0A3A5B0h
0x67C66F: fucom   st(1)
0x67C671: fnstsw  ax
0x67C673: fstp    st(1)
0x67C675: test    ah, 44h
0x67C678: jnp     short loc_67C6A5
0x67C67A: fld     dword ptr [esi+44h]
0x67C67D: lea     ecx, [esi+44h]
0x67C680: fucomp  st(1)
0x67C682: fnstsw  ax
0x67C684: test    ah, 44h
0x67C687: jnp     short loc_67C6A5
0x67C689: fld     dword ptr [esi+4Ch]
0x67C68C: fucompp
0x67C68E: fnstsw  ax
0x67C690: test    ah, 44h
0x67C693: jnp     short loc_67C6A7
0x67C695: push    offset Vector3_InitValue?
0x67C69A: call    sub_8AA350
0x67C69F: test    al, al
0x67C6A1: jz      short loc_67C6BA
0x67C6A3: jmp     short loc_67C6A7
0x67C6A5: fstp    st
0x67C6A7: mov     eax, [esp+10h+arg_4]
0x67C6AB: push    0
0x67C6AD: push    eax
0x67C6AE: lea     ecx, [esp+18h+var_C]
0x67C6B2: push    ecx
0x67C6B3: mov     ecx, esi
0x67C6B5: call    sub_67C4A0
0x67C6BA: mov     edx, [esi+44h]
0x67C6BD: mov     eax, [esp+10h+arg_0]
0x67C6C1: mov     ecx, [esi+48h]
0x67C6C4: mov     [eax], edx
0x67C6C6: mov     edx, [esi+4Ch]
0x67C6C9: mov     [eax+4], ecx
0x67C6CC: mov     [eax+8], edx
0x67C6CF: pop     esi
0x67C6D0: add     esp, 0Ch
0x67C6D3: retn    8
