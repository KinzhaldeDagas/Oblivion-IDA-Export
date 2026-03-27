0x444740: sub     esp, 108h
0x444746: mov     eax, ds:0B30AACh
0x44474B: xor     eax, esp
0x44474D: mov     [esp+108h+var_4], eax
0x444754: push    edi
0x444755: mov     edi, [esp+10Ch+arg_0]
0x44475C: test    edi, edi
0x44475E: jz      short loc_4447D0
0x444760: mov     eax, ds:0B333A0h
0x444765: push    esi
0x444766: mov     esi, [eax+34h]
0x444769: test    esi, esi
0x44476B: jz      short loc_444782
0x44476D: mov     ecx, esi; this
0x44476F: call    TESObjectCELL_IsInterior
0x444774: test    al, al
0x444776: jz      short loc_444782
0x444778: lea     ecx, [esi+28h]
0x44477B: call    sub_424180
0x444780: jmp     short loc_444787
0x444782: mov     eax, ds:0B35C24h
0x444787: test    eax, eax
0x444789: jz      short loc_4447CF
0x44478B: lea     esi, [esp+110h+var_108]
0x44478F: mov     edx, edi
0x444791: sub     esi, edi
0x444793: push    ebx
0x444794: mov     bl, [edx]
0x444796: mov     [esi+edx], bl
0x444799: add     edx, 1
0x44479C: test    bl, bl
0x44479E: jnz     short loc_444794
0x4447A0: lea     edx, [esp+114h+var_108]
0x4447A4: add     edx, 0FFFFFFFFh
0x4447A7: mov     bl, [edx+1]
0x4447AA: add     edx, 1
0x4447AD: test    bl, bl
0x4447AF: jnz     short loc_4447A7
0x4447B1: mov     ecx, ds:0A375F8h
0x4447B7: mov     [edx], ecx
0x4447B9: mov     cl, ds:0A375FCh
0x4447BF: mov     [edx+4], cl
0x4447C2: lea     edx, [esp+114h+var_108]
0x4447C6: push    edx
0x4447C7: mov     ecx, eax
0x4447C9: call    sub_889D60
0x4447CE: pop     ebx
0x4447CF: pop     esi
0x4447D0: mov     ecx, [esp+10Ch+var_4]
0x4447D7: pop     edi
0x4447D8: xor     ecx, esp
0x4447DA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4447DF: add     esp, 108h
0x4447E5: retn    4
