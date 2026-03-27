0x9091D0: push    ebp
0x9091D1: mov     ebp, esp
0x9091D3: and     esp, 0FFFFFFF0h
0x9091D6: sub     esp, 4A4h
0x9091DC: mov     eax, ds:0B30AACh
0x9091E1: mov     ecx, large fs:2Ch
0x9091E8: mov     edx, ds:0BA9DE4h
0x9091EE: push    ebx
0x9091EF: push    esi
0x9091F0: mov     [esp+4ACh+var_4], eax
0x9091F7: mov     eax, [ecx+edx*4]
0x9091FA: mov     esi, [eax+1A4h]
0x909200: push    edi
0x909201: cmp     esi, [eax+1A8h]
0x909207: jnb     short loc_909234
0x909209: mov     esi, eax
0x90920B: mov     ecx, [esi+1A4h]
0x909211: mov     dword ptr [ecx], offset aLtbvtree; "LtBvTree"
0x909217: mov     dword ptr [ecx+0Ch], offset aQuerytree; "QueryTree"
0x90921E: rdtsc
0x909220: mov     [esp+4B0h+var_49C], eax
0x909224: mov     eax, [esp+4B0h+var_49C]
0x909228: mov     [ecx+4], eax
0x90922B: add     ecx, 10h
0x90922E: mov     [esi+1A4h], ecx
0x909234: mov     esi, [ebp+arg_0]
0x909237: mov     ecx, [esi+8]
0x90923A: mov     ebx, [ebp+arg_4]
0x90923D: mov     edx, [ebx+8]
0x909240: push    ecx
0x909241: push    edx
0x909242: lea     ecx, [esp+4B8h+var_460]
0x909246: call    sub_8B1FF0
0x90924B: mov     edi, [ebp+arg_8]
0x90924E: mov     ecx, [esi]
0x909250: mov     eax, [ecx]
0x909252: lea     edx, [esp+4B0h+var_480]
0x909256: push    edx
0x909257: mov     edx, [edi+8]
0x90925A: push    edx
0x90925B: lea     edx, [esp+4B8h+var_460]
0x90925F: push    edx
0x909260: call    dword ptr [eax+0Ch]
0x909263: mov     ebx, [ebx]
0x909265: lea     eax, [esp+4B0h+var_414]
0x90926C: mov     [esp+4B0h+var_420], eax
0x909273: lea     eax, [esp+4B0h+var_420]
0x90927A: push    eax
0x90927B: lea     ecx, [esp+4B4h+var_480]
0x90927F: mov     [esp+4B4h+var_41C], 0
0x90928A: mov     [esp+4B4h+var_418], 80000080h
0x909295: mov     edx, [ebx]
0x909297: push    ecx
0x909298: mov     ecx, ebx
0x90929A: call    dword ptr [edx+24h]
0x90929D: mov     edx, ds:0BA9DE4h
0x9092A3: mov     ecx, large fs:2Ch
0x9092AA: mov     eax, [ecx+edx*4]
0x9092AD: mov     edx, [eax+1A4h]
0x9092B3: cmp     edx, [eax+1A8h]
0x9092B9: jnb     short loc_9092ED
0x9092BB: mov     eax, ds:0BA9DE4h
0x9092C0: mov     ecx, [ecx+eax*4]
0x9092C3: mov     [esp+4B0h+var_498], ecx
0x9092C7: mov     ecx, [ecx+1A4h]
0x9092CD: mov     dword ptr [ecx], offset aStnarrowphase; "StNarrowPhase"
0x9092D3: rdtsc
0x9092D5: mov     [esp+4B0h+var_49C], eax
0x9092D9: mov     edx, [esp+4B0h+var_49C]
0x9092DD: mov     eax, [esp+4B0h+var_498]
0x9092E1: mov     [ecx+4], edx
0x9092E4: add     ecx, 0Ch
0x9092E7: mov     [eax+1A4h], ecx
0x9092ED: mov     ecx, [esi]
0x9092EF: mov     edx, [ecx]
0x9092F1: call    dword ptr [edx+8]
0x9092F4: mov     esi, [esp+4B0h+var_420]
0x9092FB: mov     ecx, [ebp+arg_4]
0x9092FE: mov     ebx, [ebx+0Ch]
0x909301: mov     [esp+4B0h+var_498], eax
0x909305: mov     eax, [esp+4B0h+var_41C]
0x90930C: lea     eax, [esi+eax*4]
0x90930F: cmp     esi, eax
0x909311: mov     [esp+4B0h+var_484], ecx
0x909315: mov     ecx, [ecx+8]
0x909318: mov     [esp+4B0h+var_49C], eax
0x90931C: mov     [esp+4B0h+var_488], ecx
0x909320: jz      loc_9093B5
0x909326: mov     eax, [esi]
0x909328: mov     ecx, [edi+4]
0x90932B: mov     edx, [ecx]
0x90932D: push    eax
0x90932E: mov     eax, [ebp+arg_4]
0x909331: push    ebx
0x909332: push    eax
0x909333: mov     eax, [ebp+arg_0]
0x909336: push    eax
0x909337: push    edi
0x909338: lea     eax, [esp+4C4h+var_491]
0x90933C: push    eax
0x90933D: call    dword ptr [edx]
0x90933F: cmp     byte ptr [eax], 0
0x909342: jz      short loc_90939F
0x909344: mov     ecx, [esi]
0x909346: mov     edx, [ebx]
0x909348: lea     eax, [esp+4B0h+var_210]
0x90934F: push    eax
0x909350: push    ecx
0x909351: mov     ecx, ebx
0x909353: call    dword ptr [edx+28h]
0x909356: mov     ecx, [esi]
0x909358: mov     [esp+4B0h+var_48C], ecx
0x90935C: mov     [esp+4B0h+var_490], eax
0x909360: mov     edx, [eax]
0x909362: mov     ecx, eax
0x909364: call    dword ptr [edx+8]
0x909367: mov     edx, [esp+4B0h+var_498]
0x90936B: mov     ecx, [edi]
0x90936D: shl     edx, 5
0x909370: add     edx, ecx
0x909372: movzx   eax, byte ptr [edx+eax+190h]
0x90937A: mov     edx, [ebp+arg_C]
0x90937D: push    edx
0x90937E: push    edi
0x90937F: lea     edx, [esp+4B8h+var_490]
0x909383: push    edx
0x909384: mov     edx, [ebp+arg_0]
0x909387: lea     eax, [eax+eax*4]
0x90938A: push    edx
0x90938B: call    dword ptr [ecx+eax*4+994h]
0x909392: mov     eax, [ebp+arg_C]
0x909395: mov     cl, [eax+4]
0x909398: add     esp, 10h
0x90939B: test    cl, cl
0x90939D: jnz     short loc_9093AE
0x90939F: mov     eax, [esp+4B0h+var_49C]
0x9093A3: add     esi, 4
0x9093A6: cmp     esi, eax
0x9093A8: jnz     loc_909326
0x9093AE: mov     esi, [esp+4B0h+var_420]
0x9093B5: mov     edi, large fs:2Ch
0x9093BC: mov     ebx, ds:0BA9DE4h
0x9093C2: mov     eax, [edi+ebx*4]
0x9093C5: mov     ecx, [eax+1A4h]
0x9093CB: cmp     ecx, [eax+1A8h]
0x9093D1: jnb     short loc_9093FE
0x9093D3: mov     esi, eax
0x9093D5: mov     ecx, [esi+1A4h]
0x9093DB: mov     dword ptr [ecx], offset aLt_0; "lt"
0x9093E1: rdtsc
0x9093E3: mov     [esp+4B0h+var_498], eax
0x9093E7: mov     edx, [esp+4B0h+var_498]
0x9093EB: mov     [ecx+4], edx
0x9093EE: add     ecx, 0Ch
0x9093F1: mov     [esi+1A4h], ecx
0x9093F7: mov     esi, [esp+4B0h+var_420]
0x9093FE: mov     edx, [esp+4B0h+var_418]
0x909405: test    edx, edx
0x909407: js      short loc_90942F
0x909409: mov     eax, [edi+ebx*4]
0x90940C: mov     eax, [eax+19Ch]
0x909412: test    eax, eax
0x909414: jnz     short loc_90941B
0x909416: mov     eax, ds:0BA7D9Ch
0x90941B: and     edx, 3FFFFFFFh
0x909421: push    14h
0x909423: shl     edx, 2
0x909426: push    edx
0x909427: push    esi
0x909428: mov     ecx, eax
0x90942A: call    sub_8A75D0
0x90942F: mov     ecx, [esp+4B0h+var_4]
0x909436: call    @__security_check_cookie@4; __security_check_cookie(x)
0x90943B: pop     edi
0x90943C: pop     esi
0x90943D: pop     ebx
0x90943E: mov     esp, ebp
0x909440: pop     ebp
0x909441: retn
