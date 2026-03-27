0x902590: push    ebp
0x902591: mov     ebp, esp
0x902593: and     esp, 0FFFFFFF0h
0x902596: sub     esp, 64h
0x902599: push    ebx
0x90259A: mov     ebx, ds:0BA9DE4h
0x9025A0: push    esi
0x9025A1: push    edi
0x9025A2: mov     edi, large fs:2Ch
0x9025A9: mov     eax, [edi+ebx*4]
0x9025AC: mov     ecx, [eax+1A4h]
0x9025B2: cmp     ecx, [eax+1A8h]
0x9025B8: jnb     short loc_9025E5
0x9025BA: mov     esi, eax
0x9025BC: mov     ecx, [esi+1A4h]
0x9025C2: mov     dword ptr [ecx], offset aLtcvslistagent; "LtCvsListAgent"
0x9025C8: mov     dword ptr [ecx+0Ch], offset aCheckhull; "checkHull"
0x9025CF: rdtsc
0x9025D1: mov     [esp+70h+var_5C], eax
0x9025D5: mov     edx, [esp+70h+var_5C]
0x9025D9: mov     [ecx+4], edx
0x9025DC: add     ecx, 10h
0x9025DF: mov     [esi+1A4h], ecx
0x9025E5: mov     esi, [ebp+arg_4]
0x9025E8: mov     eax, [esi+8]
0x9025EB: mov     ecx, ds:0B2FFE4h
0x9025F1: mov     [esp+70h+var_50], eax
0x9025F5: mov     eax, [esi]
0x9025F7: mov     [esp+70h+var_3C], ecx
0x9025FB: mov     [esp+70h+var_4C], esi
0x9025FF: mov     [esp+70h+var_42], 1
0x902606: mov     [esp+70h+var_40], 0
0x90260E: mov     [esp+70h+var_48], offset off_A9BB94
0x902616: mov     ecx, [eax+10h]
0x902619: mov     edx, [ecx]
0x90261B: fld     dword ptr [edx+0Ch]
0x90261E: mov     edx, [esi+4]
0x902621: mov     [esp+70h+var_38], ecx
0x902625: mov     eax, [eax+14h]
0x902628: fstp    [esp+70h+var_3C]
0x90262C: mov     [esp+70h+var_34], eax
0x902630: lea     ecx, [esp+70h+var_48]
0x902634: lea     eax, [esp+70h+var_30]
0x902638: push    eax
0x902639: mov     [esp+74h+var_58], ecx
0x90263D: mov     ecx, eax
0x90263F: push    ecx
0x902640: mov     ecx, [ebp+arg_0]
0x902643: mov     [esp+78h+var_54], edx
0x902647: mov     edx, [ebp+arg_8]
0x90264A: push    edx
0x90264B: lea     eax, [esp+7Ch+var_58]
0x90264F: push    eax
0x902650: push    ecx
0x902651: mov     [esp+84h+var_30], offset off_A9BB8C
0x902659: mov     [esp+84h+var_28], 0
0x90265E: mov     [esp+84h+var_4], 7F7FFFFFh
0x902669: mov     [esp+84h+var_2C], 7F7FFFFFh
0x902671: call    sub_935CC0
0x902676: mov     al, [esp+84h+var_28]
0x90267A: add     esp, 14h
0x90267D: test    al, al
0x90267F: jz      short loc_9026D0
0x902681: mov     eax, [edi+ebx*4]
0x902684: mov     edx, [eax+1A4h]
0x90268A: cmp     edx, [eax+1A8h]
0x902690: jnb     short loc_9026B7
0x902692: mov     ecx, [eax+1A4h]
0x902698: mov     dword ptr [ecx], offset aStchild; "Stchild"
0x90269E: rdtsc
0x9026A0: mov     [esp+70h+var_5C], eax
0x9026A4: mov     eax, [esp+70h+var_5C]
0x9026A8: mov     [ecx+4], eax
0x9026AB: mov     eax, [edi+ebx*4]
0x9026AE: add     ecx, 0Ch
0x9026B1: mov     [eax+1A4h], ecx
0x9026B7: mov     ecx, [ebp+arg_10]
0x9026BA: mov     edx, [ebp+arg_C]
0x9026BD: mov     eax, [ebp+arg_8]
0x9026C0: push    ecx
0x9026C1: mov     ecx, [ebp+arg_0]
0x9026C4: push    edx
0x9026C5: push    eax
0x9026C6: push    esi
0x9026C7: push    ecx
0x9026C8: call    sub_901E40
0x9026CD: add     esp, 14h
0x9026D0: mov     eax, [edi+ebx*4]
0x9026D3: mov     edx, [eax+1A4h]
0x9026D9: cmp     edx, [eax+1A8h]
0x9026DF: jnb     short loc_902705
0x9026E1: mov     edi, eax
0x9026E3: mov     ecx, [edi+1A4h]
0x9026E9: mov     dword ptr [ecx], offset aLt_0; "lt"
0x9026EF: rdtsc
0x9026F1: mov     [esp+70h+var_5C], eax
0x9026F5: mov     eax, [esp+70h+var_5C]
0x9026F9: mov     [ecx+4], eax
0x9026FC: add     ecx, 0Ch
0x9026FF: mov     [edi+1A4h], ecx
0x902705: pop     edi
0x902706: pop     esi
0x902707: pop     ebx
0x902708: mov     esp, ebp
0x90270A: pop     ebp
0x90270B: retn
