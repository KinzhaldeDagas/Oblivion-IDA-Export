0x76DE00: mov     eax, [esp+arg_8]
0x76DE04: sub     esp, 20h
0x76DE07: test    eax, eax
0x76DE09: jnz     short loc_76DE0F
0x76DE0B: add     esp, 20h
0x76DE0E: retn
0x76DE0F: push    ebx
0x76DE10: push    eax
0x76DE11: call    sub_76BEF0
0x76DE16: mov     ebx, eax
0x76DE18: add     esp, 4
0x76DE1B: test    ebx, ebx
0x76DE1D: jnz     short loc_76DE24
0x76DE1F: pop     ebx
0x76DE20: add     esp, 20h
0x76DE23: retn
0x76DE24: push    esi
0x76DE25: mov     esi, ds:0B3F928h
0x76DE2B: mov     eax, [esi]
0x76DE2D: mov     edx, [eax+7Ch]
0x76DE30: push    edi
0x76DE31: mov     ecx, esi
0x76DE33: call    edx
0x76DE35: mov     edx, [eax]
0x76DE37: mov     edi, ds:0B42154h
0x76DE3D: mov     ecx, eax
0x76DE3F: mov     eax, [edx+5Ch]
0x76DE42: push    0
0x76DE44: call    eax
0x76DE46: mov     eax, [eax+0Ch]
0x76DE49: mov     ecx, [esi+5C0h]
0x76DE4F: mov     esi, [esi+5BCh]
0x76DE55: mov     edx, [edi]
0x76DE57: push    ebx
0x76DE58: push    1
0x76DE5A: push    2
0x76DE5C: push    eax
0x76DE5D: mov     eax, [edx+28h]
0x76DE60: push    ecx
0x76DE61: push    esi
0x76DE62: push    edi
0x76DE63: call    eax
0x76DE65: test    eax, eax
0x76DE67: jge     short loc_76DE86
0x76DE69: push    eax
0x76DE6A: call    sub_7736F0
0x76DE6F: push    eax
0x76DE70: push    offset aNidx9additio_0; "NiDX9AdditionalDepthStencilBufferData::"...
0x76DE75: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76DE7A: add     esp, 0Ch
0x76DE7D: pop     edi
0x76DE7E: pop     esi
0x76DE7F: xor     eax, eax
0x76DE81: pop     ebx
0x76DE82: add     esp, 20h
0x76DE85: retn
0x76DE86: push    1Ch; Size
0x76DE88: call    FormHeapAlloc
0x76DE8D: add     esp, 4
0x76DE90: test    eax, eax
0x76DE92: jz      short loc_76DE9F
0x76DE94: mov     ecx, eax; this
0x76DE96: call    ??0NiDX9AdditionalDepthStencilBufferData@@QAE@XZ; NiDX9AdditionalDepthStencilBufferData::NiDX9AdditionalDepthStencilBufferData(void)
0x76DE9B: mov     esi, eax
0x76DE9D: jmp     short loc_76DEA1
0x76DE9F: xor     esi, esi
0x76DEA1: mov     ecx, ds:0B294ECh
0x76DEA7: mov     edx, [esp+2Ch+arg_4]
0x76DEAB: push    ebp
0x76DEAC: push    0
0x76DEAE: mov     [esi+18h], ecx
0x76DEB1: mov     ebp, [esi+18h]
0x76DEB4: mov     eax, [edx]
0x76DEB6: mov     ecx, [eax+0Ch]
0x76DEB9: mov     eax, [eax+8]
0x76DEBC: mov     edx, [esp+34h+arg_0]
0x76DEC0: mov     edx, [edx]
0x76DEC2: lea     edi, [esi+0Ch]
0x76DEC5: push    edi
0x76DEC6: push    ebp
0x76DEC7: push    0
0x76DEC9: push    0
0x76DECB: push    ebx
0x76DECC: push    ecx
0x76DECD: mov     ecx, [edx+74h]
0x76DED0: push    eax
0x76DED1: mov     eax, [esp+50h+arg_0]
0x76DED5: push    eax
0x76DED6: call    ecx
0x76DED8: test    eax, eax
0x76DEDA: pop     ebp
0x76DEDB: jge     short loc_76DF04
0x76DEDD: push    eax
0x76DEDE: call    sub_7736F0
0x76DEE3: push    eax
0x76DEE4: push    offset aNidx9additio_0; "NiDX9AdditionalDepthStencilBufferData::"...
0x76DEE9: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76DEEE: add     esp, 0Ch
0x76DEF1: mov     edx, [esi]
0x76DEF3: mov     eax, [edx]
0x76DEF5: push    1
0x76DEF7: mov     ecx, esi
0x76DEF9: call    eax
0x76DEFB: pop     edi
0x76DEFC: pop     esi
0x76DEFD: xor     eax, eax
0x76DEFF: pop     ebx
0x76DF00: add     esp, 20h
0x76DF03: retn
0x76DF04: mov     edi, [edi]
0x76DF06: mov     ecx, [edi]
0x76DF08: mov     eax, [ecx+30h]
0x76DF0B: lea     edx, [esp+2Ch+a1]
0x76DF0F: push    edx
0x76DF10: push    edi
0x76DF11: call    eax
0x76DF13: test    eax, eax
0x76DF15: jl      short loc_76DEF1
0x76DF17: mov     ecx, [esp+2Ch+a1]
0x76DF1B: push    ecx; a1
0x76DF1C: call    CreateSurfaceData
0x76DF21: mov     edi, [esp+30h+arg_4]
0x76DF25: add     esp, 4
0x76DF28: mov     [esi+10h], eax
0x76DF2B: mov     [esi+14h], ebx
0x76DF2E: mov     ecx, [edi]; this
0x76DF30: push    esi; a2
0x76DF31: call    sub_70BD60
0x76DF36: mov     edx, [edi]
0x76DF38: pop     edi
0x76DF39: mov     [esi+8], edx
0x76DF3C: mov     eax, esi
0x76DF3E: pop     esi
0x76DF3F: pop     ebx
0x76DF40: add     esp, 20h
0x76DF43: retn
