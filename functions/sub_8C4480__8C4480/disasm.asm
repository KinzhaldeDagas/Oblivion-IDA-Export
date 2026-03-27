0x8C4480: push    ebp
0x8C4481: mov     ebp, esp
0x8C4483: and     esp, 0FFFFFFF0h
0x8C4486: push    0FFFFFFFFh
0x8C4488: push    offset SEH_8C4480
0x8C448D: mov     eax, large fs:0
0x8C4493: push    eax
0x8C4494: sub     esp, 58h
0x8C4497: mov     eax, ds:0B30AACh
0x8C449C: xor     eax, esp
0x8C449E: mov     [esp+64h+var_14], eax
0x8C44A2: push    ebx
0x8C44A3: push    esi
0x8C44A4: push    edi
0x8C44A5: mov     eax, ds:0B30AACh
0x8C44AA: xor     eax, esp
0x8C44AC: push    eax
0x8C44AD: lea     eax, [esp+74h+var_C]
0x8C44B1: mov     large fs:0, eax
0x8C44B7: mov     esi, [ebp+arg_0]
0x8C44BA: test    esi, esi
0x8C44BC: mov     ebx, ecx
0x8C44BE: jz      loc_8C45EE
0x8C44C4: mov     ecx, ds:0BA7D98h
0x8C44CA: mov     eax, [ecx]
0x8C44CC: mov     edx, [eax+10h]
0x8C44CF: push    24h ; '$'
0x8C44D1: push    40h ; '@'
0x8C44D3: call    edx
0x8C44D5: mov     word ptr [eax+4], 40h ; '@'
0x8C44DB: mov     [esp+74h+var_54], eax
0x8C44DF: fld     dword ptr [esi+20h]
0x8C44E2: fstp    [esp+74h+var_58]
0x8C44E6: lea     ecx, [esp+74h+var_40]
0x8C44EA: fld     dword ptr [esi+24h]
0x8C44ED: push    ecx
0x8C44EE: fstp    [esp+78h+var_5C]
0x8C44F2: lea     edx, [esp+78h+var_50]
0x8C44F6: fld     dword ptr [esi+28h]
0x8C44F9: push    edx
0x8C44FA: fstp    [esp+7Ch+var_60]
0x8C44FE: lea     ecx, [esp+7Ch+var_30]
0x8C4502: fld     dword ptr [esi+2Ch]
0x8C4505: push    ecx
0x8C4506: fstp    [esp+80h+var_64]
0x8C450A: mov     ecx, eax
0x8C450C: fld     [esp+80h+var_58]
0x8C4510: mov     [esp+80h+var_4], 0
0x8C4518: fstp    [esp+80h+var_40]
0x8C451C: fld     [esp+80h+var_5C]
0x8C4520: fstp    [esp+80h+var_3C]
0x8C4524: fld     [esp+80h+var_60]
0x8C4528: fstp    [esp+80h+var_38]
0x8C452C: fld     [esp+80h+var_64]
0x8C4530: fstp    [esp+80h+var_34]
0x8C4534: fld     dword ptr [esi+30h]
0x8C4537: fstp    [esp+80h+var_64]
0x8C453B: fld     dword ptr [esi+34h]
0x8C453E: fstp    [esp+80h+var_60]
0x8C4542: fld     dword ptr [esi+38h]
0x8C4545: fstp    [esp+80h+var_5C]
0x8C4549: fld     dword ptr [esi+3Ch]
0x8C454C: fstp    [esp+80h+var_58]
0x8C4550: fld     [esp+80h+var_64]
0x8C4554: fstp    [esp+80h+var_50]
0x8C4558: fld     [esp+80h+var_60]
0x8C455C: fstp    [esp+80h+var_4C]
0x8C4560: fld     [esp+80h+var_5C]
0x8C4564: fstp    [esp+80h+var_48]
0x8C4568: fld     [esp+80h+var_58]
0x8C456C: fstp    [esp+80h+var_44]
0x8C4570: fld     dword ptr [esi+10h]
0x8C4573: fstp    [esp+80h+var_64]
0x8C4577: fld     dword ptr [esi+14h]
0x8C457A: fstp    [esp+80h+var_60]
0x8C457E: fld     dword ptr [esi+18h]
0x8C4581: fstp    [esp+80h+var_5C]
0x8C4585: fld     dword ptr [esi+1Ch]
0x8C4588: fstp    [esp+80h+var_58]
0x8C458C: fld     [esp+80h+var_64]
0x8C4590: fstp    [esp+80h+var_30]
0x8C4594: fld     [esp+80h+var_60]
0x8C4598: fstp    [esp+80h+var_2C]
0x8C459C: fld     [esp+80h+var_5C]
0x8C45A0: fstp    [esp+80h+var_28]
0x8C45A4: fld     [esp+80h+var_58]
0x8C45A8: fstp    [esp+80h+var_24]
0x8C45AC: call    sub_914FD0
0x8C45B1: mov     edx, [ebx]
0x8C45B3: mov     edi, eax
0x8C45B5: mov     eax, [edx+4Ch]
0x8C45B8: push    edi
0x8C45B9: mov     ecx, ebx
0x8C45BB: mov     [esp+78h+var_4], 0FFFFFFFFh
0x8C45C3: call    eax
0x8C45C5: cmp     word ptr [edi+4], 0
0x8C45CA: jz      short loc_8C45E4
0x8C45CC: add     word ptr [edi+6], 0FFFFh
0x8C45D1: movzx   eax, word ptr [edi+6]
0x8C45D5: test    ax, ax
0x8C45D8: jnz     short loc_8C45E4
0x8C45DA: mov     edx, [edi]
0x8C45DC: mov     eax, [edx]
0x8C45DE: push    1
0x8C45E0: mov     ecx, edi
0x8C45E2: call    eax
0x8C45E4: mov     edx, [ebx]
0x8C45E6: mov     eax, [edx+7Ch]
0x8C45E9: push    esi
0x8C45EA: mov     ecx, ebx
0x8C45EC: call    eax
0x8C45EE: mov     ecx, [esp+74h+var_C]
0x8C45F2: mov     large fs:0, ecx
0x8C45F9: pop     ecx
0x8C45FA: pop     edi
0x8C45FB: pop     esi
0x8C45FC: pop     ebx
0x8C45FD: mov     ecx, [esp+64h+var_14]
0x8C4601: xor     ecx, esp
0x8C4603: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C4608: mov     esp, ebp
0x8C460A: pop     ebp
0x8C460B: retn    4
