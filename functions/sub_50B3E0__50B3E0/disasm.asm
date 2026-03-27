0x50B3E0: sub     esp, 14h
0x50B3E3: mov     edx, [esp+14h+arg_10]
0x50B3E7: push    esi
0x50B3E8: mov     esi, [esp+18h+a4]
0x50B3EC: push    edi
0x50B3ED: mov     edi, [esp+1Ch+l]
0x50B3F1: lea     eax, [esp+1Ch+var_C]
0x50B3F5: push    eax
0x50B3F6: mov     eax, [esp+20h+arg_C]
0x50B3FA: lea     ecx, [esp+20h+var_10]
0x50B3FE: push    ecx; UInt16
0x50B3FF: mov     ecx, [esp+24h+a3]
0x50B403: push    edi; l
0x50B404: push    edx; a6
0x50B405: mov     edx, [esp+2Ch+arg_4]
0x50B409: push    eax; a5
0x50B40A: mov     eax, [esp+30h+a1]
0x50B40E: push    esi; a4
0x50B40F: push    ecx; a3
0x50B410: push    edx; a2
0x50B411: push    eax; a1
0x50B412: mov     dword ptr [esp+40h+var_10], 0
0x50B41A: mov     [esp+40h+var_C], 0
0x50B422: call    Script_ExtractArgs
0x50B427: add     esp, 24h
0x50B42A: test    al, al
0x50B42C: jnz     short loc_50B434
0x50B42E: pop     edi
0x50B42F: pop     esi
0x50B430: add     esp, 14h
0x50B433: retn
0x50B434: mov     ecx, dword ptr [esp+1Ch+var_10]
0x50B438: fld     dword ptr ds:0A4CAE0h
0x50B43E: add     ecx, 1
0x50B441: push    ebx
0x50B442: push    ecx; int
0x50B443: push    ecx
0x50B444: fstp    [esp+28h+var_28]; float
0x50B447: call    sub_507010
0x50B44C: mov     ebx, [esp+28h+arg_18]
0x50B450: fnstcw  [esp+28h+var_12]
0x50B454: movzx   eax, [esp+28h+var_12]
0x50B459: or      eax, 0C00h
0x50B45E: mov     dword ptr [esp+28h+var_8], eax
0x50B462: add     esp, 8
0x50B465: test    esi, esi
0x50B467: fldcw   word ptr [esp+20h+var_8]
0x50B46B: fistp   [esp+20h+var_8]
0x50B46F: mov     eax, dword ptr [esp+20h+var_8]
0x50B473: fldcw   [esp+20h+var_12]
0x50B477: fldz
0x50B479: fstp    qword ptr [ebx]
0x50B47B: jz      short loc_50B496
0x50B47D: test    edi, edi
0x50B47F: jz      short loc_50B496
0x50B481: mov     edx, [esp+20h+var_C]
0x50B485: push    eax
0x50B486: push    edx
0x50B487: mov     ecx, edi
0x50B489: call    sub_4FB5F0
0x50B48E: test    al, al
0x50B490: jz      short loc_50B496
0x50B492: fld1
0x50B494: fstp    qword ptr [ebx]
0x50B496: pop     ebx
0x50B497: pop     edi
0x50B498: mov     al, 1
0x50B49A: pop     esi
0x50B49B: add     esp, 14h
0x50B49E: retn
