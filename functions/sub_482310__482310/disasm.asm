0x482310: push    ecx
0x482311: push    ebx
0x482312: mov     ebx, ecx
0x482314: cmp     byte ptr [ebx+20h], 0
0x482318: jnz     short loc_482383
0x48231A: mov     eax, [ebx+0Ch]
0x48231D: push    ebp
0x48231E: xor     ebp, ebp
0x482320: test    eax, eax
0x482322: mov     [esp+0Ch+var_4], eax
0x482326: jbe     short loc_482371
0x482328: push    esi
0x482329: push    edi
0x48232A: lea     ebx, [ebx+0]
0x482330: xor     edi, edi
0x482332: mov     ecx, [ebx+0Ch]
0x482335: mov     edx, [ebx+10h]
0x482338: imul    ecx, ebp
0x48233B: add     ecx, edi
0x48233D: lea     esi, [edx+ecx*8]
0x482340: test    esi, esi
0x482342: jz      short loc_482361
0x482344: mov     ecx, [esi]; this
0x482346: test    ecx, ecx
0x482348: jz      short loc_482361
0x48234A: call    sub_4CE3C0
0x48234F: mov     ecx, eax; int
0x482351: call    sub_4C5640
0x482356: mov     ecx, [esi]
0x482358: call    sub_4D4D00
0x48235D: mov     eax, [esp+14h+var_4]
0x482361: add     edi, 1
0x482364: cmp     edi, eax
0x482366: jb      short loc_482332
0x482368: add     ebp, 1
0x48236B: cmp     ebp, eax
0x48236D: jb      short loc_482330
0x48236F: pop     edi
0x482370: pop     esi
0x482371: mov     eax, ds:0B333A0h
0x482376: mov     ecx, [eax+54h]
0x482379: call    WaterSurfaceLoop
0x48237E: mov     byte ptr [ebx+20h], 1
0x482382: pop     ebp
0x482383: pop     ebx
0x482384: pop     ecx
0x482385: retn
