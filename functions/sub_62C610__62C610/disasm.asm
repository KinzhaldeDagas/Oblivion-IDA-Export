0x62C610: sub     esp, 40h
0x62C613: push    ebx
0x62C614: push    ebp
0x62C615: push    esi
0x62C616: mov     esi, ecx
0x62C618: mov     eax, [esi]
0x62C61A: mov     edx, [eax+184h]
0x62C620: push    edi
0x62C621: call    edx
0x62C623: test    byte ptr [eax+1Eh], 1
0x62C627: mov     [esp+50h+var_38], eax
0x62C62B: jnz     loc_62CA6F
0x62C631: cmp     dword ptr [esi+2Ch], 0
0x62C635: mov     ebp, [esp+50h+arg_0]
0x62C639: jz      short loc_62C64C
0x62C63B: mov     ecx, [esi+2Ch]
0x62C63E: mov     eax, [ecx]
0x62C640: mov     edx, [eax+190h]
0x62C646: call    edx
0x62C648: test    al, al
0x62C64A: jnz     short loc_62C68A
0x62C64C: mov     eax, [esi]
0x62C64E: mov     edx, [eax+558h]
0x62C654: push    ebp
0x62C655: mov     ecx, esi
0x62C657: call    edx
0x62C659: cmp     dword ptr [esi+2Ch], 0
0x62C65D: jz      loc_62CA4A
0x62C663: mov     ecx, [esi+2Ch]
0x62C666: mov     eax, [ecx]
0x62C668: mov     edx, [eax+190h]
0x62C66E: call    edx
0x62C670: test    al, al
0x62C672: jnz     short loc_62C68A
0x62C674: mov     eax, [esi+2Ch]
0x62C677: mov     eax, [eax+0Ch]
0x62C67A: push    eax
0x62C67B: mov     ecx, ebp
0x62C67D: call    sub_4D88C0
0x62C682: test    al, al
0x62C684: jz      loc_62CA4A
0x62C68A: mov     edi, [esi+2Ch]
0x62C68D: test    edi, edi
0x62C68F: jz      loc_62CA6F
0x62C695: mov     ecx, [edi+58h]
0x62C698: test    ecx, ecx
0x62C69A: jz      loc_62CA6F
0x62C6A0: mov     edx, [ecx]
0x62C6A2: mov     eax, [edx+184h]
0x62C6A8: call    eax
0x62C6AA: mov     ebx, eax
0x62C6AC: test    ebx, ebx
0x62C6AE: jz      loc_62CA6F
0x62C6B4: mov     ecx, [edi+58h]
0x62C6B7: mov     edx, [ecx]
0x62C6B9: mov     edx, [edx+70h]
0x62C6BC: push    1
0x62C6BE: push    edi
0x62C6BF: lea     eax, [esp+58h+var_24]
0x62C6C3: push    eax
0x62C6C4: call    edx
0x62C6C6: mov     ecx, [edi+58h]
0x62C6C9: mov     eax, [ecx]
0x62C6CB: mov     edx, [eax+74h]
0x62C6CE: push    edi
0x62C6CF: call    edx
0x62C6D1: mov     ecx, [edi+58h]
0x62C6D4: mov     [esp+50h+var_3C], eax
0x62C6D8: mov     eax, [ecx]
0x62C6DA: mov     edx, [eax+78h]
0x62C6DD: push    edi
0x62C6DE: call    edx
0x62C6E0: test    byte ptr [ebx+1Eh], 1
0x62C6E4: mov     [esp+50h+var_40], eax
0x62C6E8: jnz     loc_62C964
0x62C6EE: mov     ecx, [edi+58h]
0x62C6F1: mov     eax, [ecx]
0x62C6F3: mov     edx, [eax+180h]
0x62C6F9: mov     ebx, [ebx+18h]
0x62C6FC: call    edx
0x62C6FE: mov     ecx, ds:0B152B0h[ebx*4]
0x62C705: cmp     dword ptr [ecx+eax*4], 2Ch ; ','
0x62C709: jz      loc_62C964
0x62C70F: mov     ecx, [edi+58h]
0x62C712: mov     edx, [ecx]
0x62C714: mov     eax, [edx+40Ch]
0x62C71A: xor     ebx, ebx
0x62C71C: call    eax
0x62C71E: test    eax, eax
0x62C720: jz      short loc_62C74C
0x62C722: mov     ecx, [edi+58h]
0x62C725: mov     edx, [ecx]
0x62C727: mov     eax, [edx+40Ch]
0x62C72D: call    eax
0x62C72F: mov     edx, [eax]
0x62C731: mov     ecx, eax
0x62C733: mov     eax, [edx+4]
0x62C736: call    eax
0x62C738: cmp     eax, 2
0x62C73B: jnz     short loc_62C74C
0x62C73D: mov     ecx, [edi+58h]
0x62C740: mov     edx, [ecx]
0x62C742: mov     eax, [edx+40Ch]
0x62C748: call    eax
0x62C74A: mov     ebx, eax
0x62C74C: mov     ecx, [esp+50h+var_38]
0x62C750: mov     ecx, [ecx+28h]
0x62C753: call    sub_452A60
0x62C758: mov     [esp+50h+arg_0], eax
0x62C75C: fild    [esp+50h+arg_0]
0x62C760: fstp    [esp+50h+arg_0]
0x62C764: fldz
0x62C766: fcomp   [esp+50h+arg_0]
0x62C76A: fnstsw  ax
0x62C76C: test    ah, 1
0x62C76F: jnz     short loc_62C77B
0x62C771: fld     dword ptr ds:0A57EF8h
0x62C777: fstp    [esp+50h+arg_0]
0x62C77B: test    ebx, ebx
0x62C77D: jz      short loc_62C79B
0x62C77F: mov     ecx, ebx
0x62C781: call    sub_68B3F0
0x62C786: push    eax
0x62C787: mov     eax, [ebp+0]
0x62C78A: lea     edx, [esp+54h+var_18]
0x62C78E: push    edx
0x62C78F: mov     edx, [eax+174h]
0x62C795: mov     ecx, ebp
0x62C797: call    edx
0x62C799: jmp     short loc_62C7BA
0x62C79B: mov     edx, [edi]
0x62C79D: mov     eax, [edx+174h]
0x62C7A3: mov     ecx, edi
0x62C7A5: call    eax
0x62C7A7: mov     edx, [ebp+0]
0x62C7AA: push    eax
0x62C7AB: mov     eax, [edx+174h]
0x62C7B1: lea     ecx, [esp+50h+var_14]
0x62C7B5: push    ecx
0x62C7B6: mov     ecx, ebp
0x62C7B8: call    eax
0x62C7BA: mov     ecx, eax
0x62C7BC: call    sub_4121A0
0x62C7C1: mov     edx, [eax+4]
0x62C7C4: mov     ecx, [eax]
0x62C7C6: mov     eax, [eax+8]
0x62C7C9: mov     [esp+4Ch+var_28], edx
0x62C7CD: mov     edx, [edi]
0x62C7CF: mov     dword ptr [esp+4Ch+var_24], eax
0x62C7D3: mov     eax, [edx+174h]
0x62C7D9: mov     [esp+4Ch+var_2C], ecx
0x62C7DD: mov     ecx, edi
0x62C7DF: call    eax
0x62C7E1: mov     edx, [ebp+0]
0x62C7E4: push    eax
0x62C7E5: mov     eax, [edx+174h]
0x62C7EB: lea     ecx, [esp+50h+var_8]
0x62C7EF: push    ecx
0x62C7F0: mov     ecx, ebp
0x62C7F2: call    eax
0x62C7F4: mov     ecx, eax
0x62C7F6: call    sub_4121A0
0x62C7FB: mov     edx, [eax+4]
0x62C7FE: mov     ecx, [eax]
0x62C800: mov     eax, [eax+8]
0x62C803: mov     [esp+4Ch+var_10], edx
0x62C807: mov     edx, [edi]
0x62C809: mov     [esp+4Ch+var_14], ecx
0x62C80D: mov     [esp+4Ch+var_C], eax
0x62C811: mov     eax, [edx+198h]
0x62C817: push    0
0x62C819: mov     ecx, edi
0x62C81B: call    eax
0x62C81D: test    al, al
0x62C81F: jnz     loc_62CA4A
0x62C825: mov     ecx, [edi+8]
0x62C828: shr     ecx, 0Bh
0x62C82B: test    cl, 1
0x62C82E: jnz     loc_62CA4A
0x62C834: mov     ecx, edi
0x62C836: call    sub_5E05B0
0x62C83B: test    al, al
0x62C83D: jz      short loc_62C8A6
0x62C83F: lea     ecx, [esp+50h+var_18]
0x62C843: call    sub_404C90
0x62C848: fstp    [esp+50h+var_38]
0x62C84C: lea     ecx, [esp+50h+var_30]
0x62C850: call    sub_404C90
0x62C855: fld     [esp+50h+var_38]
0x62C859: fcom    st(1)
0x62C85B: fnstsw  ax
0x62C85D: fstp    st(1)
0x62C85F: test    ah, 41h
0x62C862: jnz     short loc_62C8A4
0x62C864: fld     [esp+50h+arg_0]
0x62C868: fcompp
0x62C86A: fnstsw  ax
0x62C86C: test    ah, 5
0x62C86F: jp      short loc_62C8A6
0x62C871: cmp     byte ptr [esi+0D0h], 0
0x62C878: jnz     loc_62C92A
0x62C87E: mov     edx, [esi]
0x62C880: mov     eax, [edx+194h]
0x62C886: push    ebp
0x62C887: mov     ecx, esi
0x62C889: call    eax
0x62C88B: mov     edx, [esi]
0x62C88D: mov     eax, [edx+188h]
0x62C893: push    0FFFFFFFFh
0x62C895: push    ebp
0x62C896: mov     ecx, esi
0x62C898: call    eax
0x62C89A: pop     edi
0x62C89B: pop     esi
0x62C89C: pop     ebp
0x62C89D: pop     ebx
0x62C89E: add     esp, 40h
0x62C8A1: retn    4
0x62C8A4: fstp    st
0x62C8A6: cmp     byte ptr [esi+0D0h], 0
0x62C8AD: jnz     short loc_62C92A
0x62C8AF: mov     ecx, [esi+2Ch]
0x62C8B2: push    0
0x62C8B4: push    ecx
0x62C8B5: mov     ecx, ebp
0x62C8B7: call    TesObjectREF_GetDistance
0x62C8BC: fstp    [esp+50h+var_34]
0x62C8C0: fld     [esp+50h+arg_0]
0x62C8C4: push    0; char
0x62C8C6: fld     st
0x62C8C8: push    0; char
0x62C8CA: fadd    st, st(1)
0x62C8CC: sub     esp, 0Ch
0x62C8CF: mov     ecx, esi
0x62C8D1: fstp    [esp+64h+var_38]
0x62C8D5: fld     [esp+64h+var_38]
0x62C8D9: fstp    dword ptr [esp+64h+var_5C]; char
0x62C8DD: fstp    [esp+64h+var_60]; float
0x62C8E1: fld     [esp+64h+var_34]
0x62C8E5: fstp    [esp+64h+var_64]; float
0x62C8E8: push    ebp; Concurrency::details::SchedulerBase *
0x62C8E9: call    sub_629F40
0x62C8EE: mov     edx, [esi]
0x62C8F0: push    eax
0x62C8F1: mov     eax, [edx+238h]
0x62C8F7: push    ebp
0x62C8F8: mov     ecx, esi
0x62C8FA: call    eax
0x62C8FC: fld     [esp+50h+arg_0]
0x62C900: mov     eax, [esp+50h+var_40]
0x62C904: mov     edx, [esi]
0x62C906: mov     edx, [edx+414h]
0x62C90C: push    ecx
0x62C90D: mov     ecx, [esp+54h+var_3C]
0x62C911: fstp    [esp+54h+var_54]
0x62C914: push    eax
0x62C915: push    ecx
0x62C916: lea     eax, [esp+5Ch+var_24]
0x62C91A: push    eax
0x62C91B: push    ebp
0x62C91C: mov     ecx, esi
0x62C91E: call    edx
0x62C920: pop     edi
0x62C921: pop     esi
0x62C922: pop     ebp
0x62C923: pop     ebx
0x62C924: add     esp, 40h
0x62C927: retn    4
0x62C92A: mov     eax, [esp+50h+var_40]
0x62C92E: mov     ecx, [esp+50h+var_3C]
0x62C932: mov     edx, [esi]
0x62C934: mov     edx, [edx+3DCh]
0x62C93A: push    eax
0x62C93B: push    ecx
0x62C93C: mov     ecx, dword ptr [esp+58h+var_24]
0x62C940: sub     esp, 0Ch
0x62C943: mov     eax, esp
0x62C945: mov     [eax], ecx
0x62C947: mov     ecx, [esp+64h+var_20]
0x62C94B: mov     [eax+4], ecx
0x62C94E: mov     ecx, [esp+64h+var_1C]
0x62C952: mov     [eax+8], ecx
0x62C955: push    ebp
0x62C956: mov     ecx, esi
0x62C958: call    edx
0x62C95A: pop     edi
0x62C95B: pop     esi
0x62C95C: pop     ebp
0x62C95D: pop     ebx
0x62C95E: add     esp, 40h
0x62C961: retn    4
0x62C964: mov     ecx, [ebp+58h]
0x62C967: test    ecx, ecx
0x62C969: jz      short loc_62C97D
0x62C96B: mov     eax, [ecx]
0x62C96D: mov     edx, [eax+36Ch]
0x62C973: call    edx
0x62C975: test    eax, eax
0x62C977: jnz     loc_62CA6F
0x62C97D: mov     eax, [ebp+0]
0x62C980: mov     edx, [eax+174h]
0x62C986: mov     ecx, ebp
0x62C988: call    edx
0x62C98A: mov     edx, [edi]
0x62C98C: push    eax
0x62C98D: lea     eax, [esp+54h+var_18]
0x62C991: push    eax
0x62C992: mov     eax, [edx+174h]
0x62C998: mov     ecx, edi
0x62C99A: call    eax
0x62C99C: mov     ecx, eax
0x62C99E: call    sub_4121A0
0x62C9A3: lea     ecx, [esp+50h+var_18]
0x62C9A7: push    ecx
0x62C9A8: call    sub_683CB0
0x62C9AD: fstp    [esp+54h+var_3C]
0x62C9B1: fldz
0x62C9B3: add     esp, 4
0x62C9B6: lea     edx, [esp+50h+var_34]
0x62C9BA: fstp    [esp+50h+var_34]
0x62C9BE: fld     [esp+50h+var_3C]
0x62C9C2: push    edx; int
0x62C9C3: push    ecx
0x62C9C4: fstp    [esp+58h+var_58]; float
0x62C9C7: push    ebp; int
0x62C9C8: call    sub_683D80
0x62C9CD: fstp    [esp+5Ch+var_38]
0x62C9D1: fild    dword ptr ds:0B36C10h
0x62C9D7: add     esp, 0Ch
0x62C9DA: mov     ecx, ebp
0x62C9DC: fmul    qword ptr ds:0A31C78h
0x62C9E2: fstp    [esp+50h+arg_0]
0x62C9E6: call    sub_5E0590
0x62C9EB: test    al, al
0x62C9ED: jz      short loc_62C9FF
0x62C9EF: fild    dword ptr ds:0B36C18h
0x62C9F5: fmul    qword ptr ds:0A31C78h
0x62C9FB: fstp    [esp+50h+arg_0]
0x62C9FF: fld     [esp+50h+var_38]
0x62CA03: fabs
0x62CA05: fstp    [esp+50h+var_38]
0x62CA09: fld     [esp+50h+var_38]
0x62CA0D: fld     [esp+50h+arg_0]
0x62CA11: fcompp
0x62CA13: fnstsw  ax
0x62CA15: test    ah, 5
0x62CA18: jp      short loc_62CA37
0x62CA1A: fld     [esp+50h+var_3C]
0x62CA1E: push    1; char
0x62CA20: push    ecx
0x62CA21: fstp    [esp+58h+var_58]; float
0x62CA24: push    ebp; Concurrency::details::SchedulerBase *
0x62CA25: call    sub_685530
0x62CA2A: add     esp, 0Ch
0x62CA2D: pop     edi
0x62CA2E: pop     esi
0x62CA2F: pop     ebp
0x62CA30: pop     ebx
0x62CA31: add     esp, 40h
0x62CA34: retn    4
0x62CA37: push    30h ; '0'
0x62CA39: mov     ecx, ebp
0x62CA3B: call    sub_5E05F0
0x62CA40: pop     edi
0x62CA41: pop     esi
0x62CA42: pop     ebp
0x62CA43: pop     ebx
0x62CA44: add     esp, 40h
0x62CA47: retn    4
0x62CA4A: mov     eax, [esi]
0x62CA4C: mov     edx, [eax+188h]
0x62CA52: push    1
0x62CA54: push    ebp
0x62CA55: mov     ecx, esi
0x62CA57: call    edx
0x62CA59: cmp     byte ptr [esi+0D0h], 0
0x62CA60: jnz     short loc_62CA6F
0x62CA62: mov     eax, [esi]
0x62CA64: mov     edx, [eax+194h]
0x62CA6A: push    ebp
0x62CA6B: mov     ecx, esi
0x62CA6D: call    edx
0x62CA6F: pop     edi
0x62CA70: pop     esi
0x62CA71: pop     ebp
0x62CA72: pop     ebx
0x62CA73: add     esp, 40h
0x62CA76: retn    4
