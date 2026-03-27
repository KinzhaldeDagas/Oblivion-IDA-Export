0x8C5860: sub     esp, 8
0x8C5863: push    ebx
0x8C5864: push    esi
0x8C5865: mov     esi, ecx
0x8C5867: mov     eax, [esi]
0x8C5869: mov     edx, [eax+74h]
0x8C586C: push    edi
0x8C586D: lea     ecx, [esp+14h+var_4]
0x8C5871: push    ecx
0x8C5872: mov     ecx, esi
0x8C5874: call    edx
0x8C5876: mov     edi, [esp+14h+arg_0]
0x8C587A: mov     ebx, [esi+8]
0x8C587D: push    edi
0x8C587E: mov     ecx, esi
0x8C5880: call    sub_8A2610
0x8C5885: fld     dword ptr [ebx+30h]
0x8C5888: mov     eax, [edi+220h]
0x8C588E: fstp    [esp+14h+var_8]
0x8C5892: push    1
0x8C5894: lea     ecx, [esp+18h+arg_0]
0x8C5898: push    ecx
0x8C5899: push    4
0x8C589B: lea     edx, [esp+20h+var_8]
0x8C589F: push    edx
0x8C58A0: push    eax
0x8C58A1: mov     eax, [eax+8]
0x8C58A4: mov     [esp+28h+arg_0], 4
0x8C58AC: call    eax
0x8C58AE: mov     eax, [edi+220h]
0x8C58B4: push    1
0x8C58B6: lea     ecx, [esp+2Ch+arg_0]
0x8C58BA: push    ecx
0x8C58BB: push    10h
0x8C58BD: lea     edx, [ebx+20h]
0x8C58C0: push    edx
0x8C58C1: push    eax
0x8C58C2: mov     eax, [eax+8]
0x8C58C5: mov     [esp+3Ch+arg_0], 10h
0x8C58CD: call    eax
0x8C58CF: mov     edx, [edi]
0x8C58D1: mov     eax, [ebx+10h]
0x8C58D4: mov     edx, [edx+2Ch]
0x8C58D7: add     esp, 28h
0x8C58DA: push    eax
0x8C58DB: mov     ecx, edi
0x8C58DD: call    edx
0x8C58DF: mov     ecx, dword ptr [esp+14h+var_4]
0x8C58E3: mov     eax, [esi]
0x8C58E5: mov     edx, [eax+64h]
0x8C58E8: push    ecx
0x8C58E9: mov     ecx, esi
0x8C58EB: call    edx
0x8C58ED: pop     edi
0x8C58EE: pop     esi
0x8C58EF: pop     ebx
0x8C58F0: add     esp, 8
0x8C58F3: retn    4
