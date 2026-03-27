0x4E71A0: push    0FFFFFFFFh
0x4E71A2: push    offset SEH_4E71A0
0x4E71A7: mov     eax, large fs:0
0x4E71AD: push    eax
0x4E71AE: sub     esp, 20h
0x4E71B1: push    ebx
0x4E71B2: push    ebp
0x4E71B3: push    esi
0x4E71B4: push    edi
0x4E71B5: mov     eax, ds:0B30AACh
0x4E71BA: xor     eax, esp
0x4E71BC: push    eax
0x4E71BD: lea     eax, [esp+40h+var_C]
0x4E71C1: mov     large fs:0, eax
0x4E71C7: mov     ebx, ecx
0x4E71C9: mov     [esp+40h+var_28], ebx
0x4E71CD: mov     eax, [ebx+1Ch]
0x4E71D0: test    eax, eax
0x4E71D2: jz      short loc_4E71D9
0x4E71D4: call    sub_4E5400
0x4E71D9: push    0DCh ; 'Ü'; Size
0x4E71DE: call    FormHeapAlloc
0x4E71E3: add     esp, 4
0x4E71E6: mov     [esp+40h+var_24], eax
0x4E71EA: test    eax, eax
0x4E71EC: mov     [esp+40h+var_4], 0
0x4E71F4: jz      short loc_4E7203
0x4E71F6: push    0
0x4E71F8: mov     ecx, eax; this
0x4E71FA: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4E71FF: mov     edi, eax
0x4E7201: jmp     short loc_4E7205
0x4E7203: xor     edi, edi
0x4E7205: mov     esi, [ebx+1Ch]
0x4E7208: cmp     esi, edi
0x4E720A: mov     [esp+40h+var_4], 0FFFFFFFFh
0x4E7212: jz      short loc_4E7245
0x4E7214: test    esi, esi
0x4E7216: jz      short loc_4E7234
0x4E7218: lea     eax, [esi+4]
0x4E721B: push    eax; lpAddend
0x4E721C: call    dword ptr ds:0A2807Ch
0x4E7222: test    eax, eax
0x4E7224: jnz     short loc_4E7234
0x4E7226: test    esi, esi
0x4E7228: jz      short loc_4E7234
0x4E722A: mov     edx, [esi]
0x4E722C: mov     eax, [edx]
0x4E722E: push    1
0x4E7230: mov     ecx, esi
0x4E7232: call    eax
0x4E7234: test    edi, edi
0x4E7236: mov     [ebx+1Ch], edi
0x4E7239: jz      short loc_4E7245
0x4E723B: add     edi, 4
0x4E723E: push    edi; lpAddend
0x4E723F: call    dword ptr ds:0A28078h
0x4E7245: xor     esi, esi
0x4E7247: cmp     [ebx+30h], si
0x4E724B: jbe     short loc_4E7270
0x4E724D: lea     ecx, [ecx+0]
0x4E7250: mov     eax, [ebx+24h]
0x4E7253: mov     ecx, [eax+4]
0x4E7256: mov     ecx, [ecx+esi*4]
0x4E7259: test    ecx, ecx
0x4E725B: jz      short loc_4E7265
0x4E725D: push    1
0x4E725F: push    ebx
0x4E7260: call    sub_4E82E0
0x4E7265: movzx   edx, word ptr [ebx+30h]
0x4E7269: add     esi, 1
0x4E726C: cmp     esi, edx
0x4E726E: jl      short loc_4E7250
0x4E7270: mov     ecx, [ebx+38h]
0x4E7273: xor     eax, eax
0x4E7275: test    ecx, ecx
0x4E7277: jbe     short loc_4E728F
0x4E7279: mov     esi, [ebx+3Ch]
0x4E727C: mov     edx, esi
0x4E727E: mov     edi, edi
0x4E7280: cmp     dword ptr [edx], 0
0x4E7283: jnz     short loc_4E729B
0x4E7285: add     eax, 1
0x4E7288: add     edx, 4
0x4E728B: cmp     eax, ecx
0x4E728D: jb      short loc_4E7280
0x4E728F: xor     eax, eax
0x4E7291: test    eax, eax
0x4E7293: jz      loc_4E745C
0x4E7299: jmp     short loc_4E72A4
0x4E729B: mov     eax, [esi+eax*4]
0x4E729E: jmp     short loc_4E7291
0x4E72A0: mov     eax, [esp+40h+var_2C]
0x4E72A4: mov     esi, [eax+4]
0x4E72A7: mov     edi, [eax+8]
0x4E72AA: mov     eax, [eax]
0x4E72AC: test    eax, eax
0x4E72AE: mov     [esp+40h+var_24], esi
0x4E72B2: jz      short loc_4E72BA
0x4E72B4: mov     [esp+40h+var_2C], eax
0x4E72B8: jmp     short loc_4E72F0
0x4E72BA: mov     eax, [ebx+34h]
0x4E72BD: mov     edx, [eax+4]
0x4E72C0: lea     ebp, [ebx+34h]
0x4E72C3: push    esi
0x4E72C4: mov     ecx, ebp
0x4E72C6: call    edx
0x4E72C8: mov     edx, [ebp+4]
0x4E72CB: add     eax, 1
0x4E72CE: cmp     eax, edx
0x4E72D0: jnb     short loc_4E72E8
0x4E72D2: mov     ecx, [ebp+8]
0x4E72D5: lea     ecx, [ecx+eax*4]
0x4E72D8: mov     ebp, [ecx]
0x4E72DA: test    ebp, ebp
0x4E72DC: jnz     short loc_4E735C
0x4E72DE: add     eax, 1
0x4E72E1: add     ecx, 4
0x4E72E4: cmp     eax, edx
0x4E72E6: jb      short loc_4E72D8
0x4E72E8: mov     [esp+40h+var_2C], 0
0x4E72F0: test    esi, esi
0x4E72F2: jz      loc_4E7451
0x4E72F8: fld1
0x4E72FA: lea     edx, [esp+40h+var_1C]
0x4E72FE: fst     [esp+40h+var_1C]
0x4E7302: push    edx; int
0x4E7303: fldz
0x4E7305: push    ecx
0x4E7306: fst     [esp+48h+var_18]
0x4E730A: fstp    [esp+48h+var_10]
0x4E730E: fstp    [esp+48h+var_14]
0x4E7312: fld     dword ptr ds:0A31C80h
0x4E7318: fstp    [esp+48h+a2]; float
0x4E731B: call    sub_47FD30
0x4E7320: mov     ebp, eax
0x4E7322: mov     eax, [esi]
0x4E7324: mov     edx, [eax+174h]
0x4E732A: add     esp, 8
0x4E732D: mov     ecx, esi
0x4E732F: call    edx
0x4E7331: mov     ecx, [eax]
0x4E7333: mov     [ebp+54h], ecx
0x4E7336: mov     edx, [eax+4]
0x4E7339: mov     [ebp+58h], edx
0x4E733C: mov     eax, [eax+8]
0x4E733F: mov     [ebp+5Ch], eax
0x4E7342: mov     ecx, [ebx+1Ch]
0x4E7345: mov     edx, [ecx]
0x4E7347: mov     eax, [edx+84h]
0x4E734D: push    1
0x4E734F: push    ebp
0x4E7350: call    eax
0x4E7352: test    edi, edi
0x4E7354: jz      loc_4E7451
0x4E735A: jmp     short loc_4E7366
0x4E735C: mov     [esp+40h+var_2C], ebp
0x4E7360: jmp     short loc_4E72F0
0x4E7362: mov     esi, [esp+40h+var_24]
0x4E7366: cmp     dword ptr [edi+4], 0
0x4E736A: jnz     short loc_4E7375
0x4E736C: cmp     dword ptr [edi], 0
0x4E736F: jz      loc_4E7451
0x4E7375: mov     ebp, [edi]
0x4E7377: lea     ecx, [esp+40h+var_1C]
0x4E737B: push    ecx
0x4E737C: mov     ecx, ebp
0x4E737E: call    sub_4BEF40
0x4E7383: push    eax
0x4E7384: mov     eax, [esi]
0x4E7386: lea     edx, [esp+48h+var_1C]
0x4E738A: push    edx
0x4E738B: mov     edx, [eax+174h]
0x4E7391: mov     ecx, esi
0x4E7393: call    edx
0x4E7395: push    eax
0x4E7396: call    sub_47F070
0x4E739B: mov     ecx, [ebx+1Ch]
0x4E739E: mov     edx, [ecx]
0x4E73A0: add     esp, 10h
0x4E73A3: push    1
0x4E73A5: push    eax
0x4E73A6: mov     eax, [edx+84h]
0x4E73AC: call    eax
0x4E73AE: fld     dword ptr ds:0A47800h
0x4E73B4: lea     ecx, [esp+40h+var_1C]
0x4E73B8: push    ecx; int
0x4E73B9: sub     esp, 0Ch
0x4E73BC: fst     [esp+50h+a2]; float
0x4E73C0: fst     [esp+50h+var_4C]; float
0x4E73C4: fstp    [esp+50h+var_50]; float
0x4E73C7: call    sub_47EA60
0x4E73CC: push    1Ch; Size
0x4E73CE: mov     esi, eax
0x4E73D0: call    FormHeapAlloc
0x4E73D5: mov     ebx, eax
0x4E73D7: add     esp, 14h
0x4E73DA: mov     [esp+40h+var_20], ebx
0x4E73DE: test    ebx, ebx
0x4E73E0: mov     [esp+40h+var_4], 1
0x4E73E8: jz      short loc_4E73FF
0x4E73EA: mov     ecx, ebx; this
0x4E73EC: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x4E73F1: mov     dword ptr [ebx], offset ??_7NiWireframeProperty@@6B@; const NiWireframeProperty::`vftable'
0x4E73F7: mov     word ptr [ebx+18h], 0
0x4E73FD: jmp     short loc_4E7401
0x4E73FF: xor     ebx, ebx
0x4E7401: or      word ptr [ebx+18h], 1
0x4E7406: push    ebx; a2
0x4E7407: mov     ecx, esi; this
0x4E7409: mov     [esp+44h+var_4], 0FFFFFFFFh
0x4E7411: call    sub_405680
0x4E7416: mov     edx, [esp+40h+var_28]
0x4E741A: mov     ecx, [edx+1Ch]
0x4E741D: mov     eax, [ecx]
0x4E741F: mov     edx, [eax+84h]
0x4E7425: push    1
0x4E7427: push    esi
0x4E7428: call    edx
0x4E742A: mov     ecx, ebp
0x4E742C: call    sub_4BEF40
0x4E7431: mov     ecx, [eax]
0x4E7433: mov     ebx, [esp+40h+var_28]
0x4E7437: mov     [esi+54h], ecx
0x4E743A: mov     edx, [eax+4]
0x4E743D: mov     [esi+58h], edx
0x4E7440: mov     eax, [eax+8]
0x4E7443: mov     [esi+5Ch], eax
0x4E7446: mov     edi, [edi+4]
0x4E7449: test    edi, edi
0x4E744B: jnz     loc_4E7362
0x4E7451: cmp     [esp+40h+var_2C], 0
0x4E7456: jnz     loc_4E72A0
0x4E745C: mov     ecx, [ebx+1Ch]; this
0x4E745F: call    NiAVObject_InitializePropertyState
0x4E7464: mov     ecx, ds:0B35F88h
0x4E746A: mov     edx, [ecx]
0x4E746C: mov     eax, [ebx+1Ch]
0x4E746F: mov     edx, [edx+84h]
0x4E7475: push    1
0x4E7477: push    eax
0x4E7478: call    edx
0x4E747A: mov     ecx, ds:0B35F88h; this
0x4E7480: call    NiAVObject_InitializePropertyState
0x4E7485: fldz
0x4E7487: push    0; a3
0x4E7489: push    ecx
0x4E748A: mov     ecx, ds:0B35F88h; this
0x4E7490: fstp    [esp+48h+a2]; a2
0x4E7493: call    NiAVObject_UpdateNiAVObject
0x4E7498: mov     ecx, dword ptr [esp+40h+var_C]
0x4E749C: mov     large fs:0, ecx
0x4E74A3: pop     ecx
0x4E74A4: pop     edi
0x4E74A5: pop     esi
0x4E74A6: pop     ebp
0x4E74A7: pop     ebx
0x4E74A8: add     esp, 2Ch
0x4E74AB: retn
