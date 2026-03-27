0x6C70A0: push    0FFFFFFFFh
0x6C70A2: push    offset SEH_89F730
0x6C70A7: mov     eax, large fs:0
0x6C70AD: push    eax
0x6C70AE: sub     esp, 8
0x6C70B1: push    ebx
0x6C70B2: push    ebp
0x6C70B3: push    esi
0x6C70B4: push    edi
0x6C70B5: mov     eax, ds:0B30AACh
0x6C70BA: xor     eax, esp
0x6C70BC: push    eax
0x6C70BD: lea     eax, [esp+28h+var_C]
0x6C70C1: mov     large fs:0, eax
0x6C70C7: mov     ebp, ecx
0x6C70C9: mov     eax, [esp+28h+arg_4]
0x6C70CD: mov     esi, [esp+28h+arg_0]
0x6C70D1: push    eax
0x6C70D2: push    esi
0x6C70D3: call    sub_700770
0x6C70D8: mov     eax, [esi+8]
0x6C70DB: mov     ebx, [ebp+8]
0x6C70DE: push    eax
0x6C70DF: call    FormHeapFree
0x6C70E4: mov     eax, ebx
0x6C70E6: add     esp, 4
0x6C70E9: lea     edi, [eax+1]
0x6C70EC: lea     esp, [esp+0]
0x6C70F0: mov     cl, [eax]
0x6C70F2: add     eax, 1
0x6C70F5: test    cl, cl
0x6C70F7: jnz     short loc_6C70F0
0x6C70F9: sub     eax, edi
0x6C70FB: lea     edi, [eax+1]
0x6C70FE: push    edi; Size
0x6C70FF: call    FormHeapAlloc
0x6C7104: push    ebx; Src
0x6C7105: push    edi; SizeInBytes
0x6C7106: push    eax; Dst
0x6C7107: mov     [esi+8], eax
0x6C710A: call    _strcpy_s
0x6C710F: mov     ecx, [ebp+0Ch]
0x6C7112: mov     [esi+0Ch], ecx
0x6C7115: mov     edx, [ebp+10h]
0x6C7118: mov     [esi+10h], edx
0x6C711B: mov     edi, [ebp+0Ch]
0x6C711E: xor     ecx, ecx
0x6C7120: mov     eax, edi
0x6C7122: mov     edx, 10h
0x6C7127: mul     edx
0x6C7129: seto    cl
0x6C712C: neg     ecx
0x6C712E: or      ecx, eax
0x6C7130: xor     eax, eax
0x6C7132: add     ecx, 4
0x6C7135: setb    al
0x6C7138: neg     eax
0x6C713A: or      eax, ecx
0x6C713C: push    eax; Size
0x6C713D: call    FormHeapAlloc
0x6C7142: add     esp, 14h
0x6C7145: mov     [esp+28h+arg_0], eax
0x6C7149: test    eax, eax
0x6C714B: mov     [esp+28h+var_4], 0
0x6C7153: jz      short loc_6C7171
0x6C7155: push    offset sub_6C64C0; a5
0x6C715A: push    offset sub_6C62E0; a4
0x6C715F: push    edi; size
0x6C7160: lea     ebx, [eax+4]
0x6C7163: push    10h; a2
0x6C7165: push    ebx; a1
0x6C7166: mov     [eax], edi
0x6C7168: call    ArrayConstructor
0x6C716D: mov     eax, ebx
0x6C716F: jmp     short loc_6C7173
0x6C7171: xor     eax, eax
0x6C7173: mov     [esi+14h], eax
0x6C7176: mov     edi, [ebp+0Ch]
0x6C7179: xor     ecx, ecx
0x6C717B: mov     eax, edi
0x6C717D: mov     edx, 10h
0x6C7182: mul     edx
0x6C7184: seto    cl
0x6C7187: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6C718F: neg     ecx
0x6C7191: or      ecx, eax
0x6C7193: xor     eax, eax
0x6C7195: add     ecx, 4
0x6C7198: setb    al
0x6C719B: neg     eax
0x6C719D: or      eax, ecx
0x6C719F: push    eax; Size
0x6C71A0: call    FormHeapAlloc
0x6C71A5: add     esp, 4
0x6C71A8: mov     [esp+28h+arg_0], eax
0x6C71AC: test    eax, eax
0x6C71AE: mov     [esp+28h+var_4], 1
0x6C71B6: jz      short loc_6C71D4
0x6C71B8: push    offset sub_7016A0; a5
0x6C71BD: push    offset sub_6C6370; a4
0x6C71C2: push    edi; size
0x6C71C3: lea     ebx, [eax+4]
0x6C71C6: push    10h; a2
0x6C71C8: push    ebx; a1
0x6C71C9: mov     [eax], edi
0x6C71CB: call    ArrayConstructor
0x6C71D0: mov     eax, ebx
0x6C71D2: jmp     short loc_6C71D6
0x6C71D4: xor     eax, eax
0x6C71D6: xor     edi, edi
0x6C71D8: mov     [esi+18h], eax
0x6C71DB: cmp     [ebp+0Ch], edi
0x6C71DE: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6C71E6: mov     [esp+28h+var_14], edi
0x6C71EA: jbe     loc_6C7372
0x6C71F0: mov     ecx, [ebp+14h]
0x6C71F3: cmp     dword ptr [edi+ecx], 0
0x6C71F7: lea     eax, [edi+ecx]
0x6C71FA: jz      loc_6C733D
0x6C7200: cmp     dword ptr [ebp+40h], 0
0x6C7204: jnz     loc_6C72D7
0x6C720A: mov     ecx, [eax]
0x6C720C: mov     edx, [ecx]
0x6C720E: mov     eax, [esp+28h+arg_4]
0x6C7212: mov     edx, [edx+18h]
0x6C7215: push    eax
0x6C7216: call    edx
0x6C7218: mov     ebx, [esi+14h]
0x6C721B: mov     ecx, [ebx+edi]
0x6C721E: add     ebx, edi
0x6C7220: cmp     ecx, eax
0x6C7222: mov     [esp+28h+arg_0], eax
0x6C7226: mov     [esp+28h+var_10], ecx
0x6C722A: jz      short loc_6C7262
0x6C722C: test    ecx, ecx
0x6C722E: jz      short loc_6C7252
0x6C7230: add     ecx, 4
0x6C7233: push    ecx; lpAddend
0x6C7234: call    dword ptr ds:0A2807Ch
0x6C723A: test    eax, eax
0x6C723C: jnz     short loc_6C724E
0x6C723E: mov     ecx, [esp+28h+var_10]
0x6C7242: test    ecx, ecx
0x6C7244: jz      short loc_6C724E
0x6C7246: mov     eax, [ecx]
0x6C7248: mov     edx, [eax]
0x6C724A: push    1
0x6C724C: call    edx
0x6C724E: mov     eax, [esp+28h+arg_0]
0x6C7252: test    eax, eax
0x6C7254: mov     [ebx], eax
0x6C7256: jz      short loc_6C7262
0x6C7258: add     eax, 4
0x6C725B: push    eax; lpAddend
0x6C725C: call    dword ptr ds:0A28078h
0x6C7262: mov     eax, [ebp+14h]
0x6C7265: cmp     dword ptr [edi+eax+4], 0
0x6C726A: lea     eax, [edi+eax+4]
0x6C726E: jz      loc_6C733D
0x6C7274: mov     ecx, [eax]
0x6C7276: mov     edx, [ecx]
0x6C7278: mov     eax, [esp+28h+arg_4]
0x6C727C: mov     edx, [edx+18h]
0x6C727F: push    eax
0x6C7280: call    edx
0x6C7282: mov     ecx, [esi+14h]
0x6C7285: mov     ebx, [edi+ecx+4]
0x6C7289: cmp     ebx, eax
0x6C728B: lea     ecx, [edi+ecx+4]
0x6C728F: mov     [esp+28h+arg_0], eax
0x6C7293: mov     [esp+28h+var_10], ecx
0x6C7297: jz      loc_6C733D
0x6C729D: test    ebx, ebx
0x6C729F: jz      short loc_6C72C1
0x6C72A1: lea     edx, [ebx+4]
0x6C72A4: push    edx; lpAddend
0x6C72A5: call    dword ptr ds:0A2807Ch
0x6C72AB: test    eax, eax
0x6C72AD: jnz     short loc_6C72BD
0x6C72AF: test    ebx, ebx
0x6C72B1: jz      short loc_6C72BD
0x6C72B3: mov     eax, [ebx]
0x6C72B5: mov     edx, [eax]
0x6C72B7: push    1
0x6C72B9: mov     ecx, ebx
0x6C72BB: call    edx
0x6C72BD: mov     eax, [esp+28h+arg_0]
0x6C72C1: test    eax, eax
0x6C72C3: mov     ecx, [esp+28h+var_10]
0x6C72C7: mov     [ecx], eax
0x6C72C9: jz      short loc_6C733D
0x6C72CB: add     eax, 4
0x6C72CE: push    eax; lpAddend
0x6C72CF: call    dword ptr ds:0A28078h
0x6C72D5: jmp     short loc_6C733D
0x6C72D7: mov     eax, [eax]
0x6C72D9: mov     edx, [esp+28h+arg_4]
0x6C72DD: push    edx
0x6C72DE: mov     ecx, eax
0x6C72E0: call    sub_700710
0x6C72E5: mov     ebx, [esi+14h]
0x6C72E8: mov     ecx, [ebx+edi]
0x6C72EB: add     ebx, edi
0x6C72ED: cmp     ecx, eax
0x6C72EF: mov     [esp+28h+arg_0], eax
0x6C72F3: mov     [esp+28h+var_10], ecx
0x6C72F7: jz      short loc_6C732F
0x6C72F9: test    ecx, ecx
0x6C72FB: jz      short loc_6C731F
0x6C72FD: add     ecx, 4
0x6C7300: push    ecx; lpAddend
0x6C7301: call    dword ptr ds:0A2807Ch
0x6C7307: test    eax, eax
0x6C7309: jnz     short loc_6C731B
0x6C730B: mov     ecx, [esp+28h+var_10]
0x6C730F: test    ecx, ecx
0x6C7311: jz      short loc_6C731B
0x6C7313: mov     eax, [ecx]
0x6C7315: mov     edx, [eax]
0x6C7317: push    1
0x6C7319: call    edx
0x6C731B: mov     eax, [esp+28h+arg_0]
0x6C731F: test    eax, eax
0x6C7321: mov     [ebx], eax
0x6C7323: jz      short loc_6C732F
0x6C7325: add     eax, 4
0x6C7328: push    eax; lpAddend
0x6C7329: call    dword ptr ds:0A28078h
0x6C732F: mov     eax, [ebp+14h]
0x6C7332: mov     ecx, [esi+14h]
0x6C7335: mov     dl, [edi+eax+0Ch]
0x6C7339: mov     [edi+ecx+0Ch], dl
0x6C733D: mov     eax, [ebp+14h]
0x6C7340: mov     dl, [edi+eax+0Dh]
0x6C7344: mov     ecx, [esi+14h]
0x6C7347: mov     [edi+ecx+0Dh], dl
0x6C734B: mov     eax, [ebp+18h]
0x6C734E: mov     ecx, [esi+18h]
0x6C7351: add     eax, edi
0x6C7353: push    eax
0x6C7354: add     ecx, edi
0x6C7356: call    sub_6C67F0
0x6C735B: mov     eax, [esp+28h+var_14]
0x6C735F: add     eax, 1
0x6C7362: add     edi, 10h
0x6C7365: cmp     eax, [ebp+0Ch]
0x6C7368: mov     [esp+28h+var_14], eax
0x6C736C: jb      loc_6C71F0
0x6C7372: fld     dword ptr [ebp+1Ch]
0x6C7375: fstp    dword ptr [esi+1Ch]
0x6C7378: mov     edi, [esi+20h]
0x6C737B: cmp     edi, [ebp+20h]
0x6C737E: jz      short loc_6C73B4
0x6C7380: test    edi, edi
0x6C7382: jz      short loc_6C73A0
0x6C7384: lea     ecx, [edi+4]
0x6C7387: push    ecx; lpAddend
0x6C7388: call    dword ptr ds:0A2807Ch
0x6C738E: test    eax, eax
0x6C7390: jnz     short loc_6C73A0
0x6C7392: test    edi, edi
0x6C7394: jz      short loc_6C73A0
0x6C7396: mov     edx, [edi]
0x6C7398: mov     eax, [edx]
0x6C739A: push    1
0x6C739C: mov     ecx, edi
0x6C739E: call    eax
0x6C73A0: mov     eax, [ebp+20h]
0x6C73A3: test    eax, eax
0x6C73A5: mov     [esi+20h], eax
0x6C73A8: jz      short loc_6C73B4
0x6C73AA: add     eax, 4
0x6C73AD: push    eax; lpAddend
0x6C73AE: call    dword ptr ds:0A28078h
0x6C73B4: mov     ecx, [ebp+24h]
0x6C73B7: mov     edx, [esi+5Ch]
0x6C73BA: mov     [esi+24h], ecx
0x6C73BD: fld     dword ptr [ebp+28h]
0x6C73C0: fstp    dword ptr [esi+28h]
0x6C73C3: push    edx
0x6C73C4: fld     dword ptr [ebp+2Ch]
0x6C73C7: fstp    dword ptr [esi+2Ch]
0x6C73CA: fld     dword ptr [ebp+30h]
0x6C73CD: fstp    dword ptr [esi+30h]
0x6C73D0: mov     ebx, [ebp+5Ch]
0x6C73D3: call    FormHeapFree
0x6C73D8: add     esp, 4
0x6C73DB: test    ebx, ebx
0x6C73DD: mov     dword ptr [esi+5Ch], 0
0x6C73E4: jz      short loc_6C7412
0x6C73E6: mov     eax, ebx
0x6C73E8: lea     edx, [eax+1]
0x6C73EB: jmp     short loc_6C73F0
0x6C73ED: align 10h
0x6C73F0: mov     cl, [eax]
0x6C73F2: add     eax, 1
0x6C73F5: test    cl, cl
0x6C73F7: jnz     short loc_6C73F0
0x6C73F9: sub     eax, edx
0x6C73FB: lea     edi, [eax+1]
0x6C73FE: push    edi; Size
0x6C73FF: call    FormHeapAlloc
0x6C7404: push    ebx; Src
0x6C7405: push    edi; SizeInBytes
0x6C7406: push    eax; Dst
0x6C7407: mov     [esi+5Ch], eax
0x6C740A: call    _strcpy_s
0x6C740F: add     esp, 10h
0x6C7412: mov     edi, [esi+64h]
0x6C7415: cmp     edi, [ebp+64h]
0x6C7418: jz      short loc_6C744E
0x6C741A: test    edi, edi
0x6C741C: jz      short loc_6C743A
0x6C741E: lea     eax, [edi+4]
0x6C7421: push    eax; lpAddend
0x6C7422: call    dword ptr ds:0A2807Ch
0x6C7428: test    eax, eax
0x6C742A: jnz     short loc_6C743A
0x6C742C: test    edi, edi
0x6C742E: jz      short loc_6C743A
0x6C7430: mov     edx, [edi]
0x6C7432: mov     eax, [edx]
0x6C7434: push    1
0x6C7436: mov     ecx, edi
0x6C7438: call    eax
0x6C743A: mov     ebp, [ebp+64h]
0x6C743D: test    ebp, ebp
0x6C743F: mov     [esi+64h], ebp
0x6C7442: jz      short loc_6C744E
0x6C7444: add     ebp, 4
0x6C7447: push    ebp; lpAddend
0x6C7448: call    dword ptr ds:0A28078h
0x6C744E: mov     ecx, [esp+28h+var_C]
0x6C7452: mov     large fs:0, ecx
0x6C7459: pop     ecx
0x6C745A: pop     edi
0x6C745B: pop     esi
0x6C745C: pop     ebp
0x6C745D: pop     ebx
0x6C745E: add     esp, 14h
0x6C7461: retn    8
