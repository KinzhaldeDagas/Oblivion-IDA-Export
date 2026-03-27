0x774420: push    ecx
0x774421: push    ebx
0x774422: push    esi
0x774423: push    0
0x774425: mov     esi, ecx
0x774427: mov     ecx, [esi+18h]
0x77442A: mov     eax, [esi+8]
0x77442D: lea     ebx, [esp+10h+var_4]
0x774431: push    ebx
0x774432: push    1
0x774434: push    ecx
0x774435: mov     ecx, [esi+5Ch]
0x774438: push    0
0x77443A: push    ecx
0x77443B: mov     ecx, [esi+54h]
0x77443E: mov     dword ptr [esi+60h], 0
0x774445: mov     eax, [eax+280h]
0x77444B: mov     [esp+24h+var_4], 0
0x774453: mov     edx, [eax]
0x774455: mov     edx, [edx+64h]
0x774458: push    ecx
0x774459: push    eax
0x77445A: call    edx
0x77445C: test    eax, eax
0x77445E: jge     short loc_77447A
0x774460: push    eax
0x774461: call    sub_7736F0
0x774466: push    eax
0x774467: push    offset aNidx9sourcec_0; "NiDX9SourceCubeMapData::CreateCubeMap> "...
0x77446C: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x774471: add     esp, 0Ch
0x774474: pop     esi
0x774475: xor     al, al
0x774477: pop     ebx
0x774478: pop     ecx
0x774479: retn
0x77447A: mov     eax, [esp+0Ch+var_4]
0x77447E: mov     ecx, [esi+54h]
0x774481: mov     [esi+50h], eax
0x774484: movzx   eax, byte ptr [esi+0Dh]
0x774488: shr     eax, 3
0x77448B: imul    eax, [esi+5Ch]
0x77448F: imul    eax, ecx
0x774492: imul    eax, ecx
0x774495: lea     eax, [eax+eax*2]
0x774498: add     eax, eax
0x77449A: add     ds:0B4283Ch, eax
0x7744A0: mov     ecx, eax
0x7744A2: and     ecx, 0FFFFF000h
0x7744A8: xor     edx, edx
0x7744AA: cmp     ecx, eax
0x7744AC: mov     [esi+60h], eax
0x7744AF: jz      short loc_7744BB
0x7744B1: sub     ecx, eax
0x7744B3: add     ecx, 1000h
0x7744B9: mov     edx, ecx
0x7744BB: add     ds:0B42840h, edx
0x7744C1: pop     esi
0x7744C2: mov     al, 1
0x7744C4: pop     ebx
0x7744C5: pop     ecx
0x7744C6: retn
