0x740040: push    0FFFFFFFFh
0x740042: push    offset ??0NiParticleMeshesData@@QAE@XZ_SEH
0x740047: mov     eax, large fs:0
0x74004D: push    eax
0x74004E: sub     esp, 8
0x740051: push    ebx
0x740052: push    ebp
0x740053: push    esi
0x740054: push    edi
0x740055: mov     eax, ds:0B30AACh
0x74005A: xor     eax, esp
0x74005C: push    eax
0x74005D: lea     eax, [esp+28h+var_C]
0x740061: mov     large fs:0, eax
0x740067: mov     esi, ecx
0x740069: mov     [esp+28h+var_14], esi
0x74006D: call    sub_73EE80
0x740072: xor     ebx, ebx
0x740074: mov     dword ptr [esi], offset ??_7NiParticleMeshesData@@6B@; const NiParticleMeshesData::`vftable'
0x74007A: mov     [esp+28h+var_4], ebx
0x74007E: mov     [esi+5Ch], ebx
0x740081: push    0DCh ; 'Ü'; Size
0x740086: mov     byte ptr [esp+2Ch+var_4], 1
0x74008B: call    FormHeapAlloc
0x740090: add     esp, 4
0x740093: mov     [esp+28h+var_10], eax
0x740097: cmp     eax, ebx
0x740099: mov     byte ptr [esp+28h+var_4], 2
0x74009E: jz      short loc_7400AC
0x7400A0: push    ebx
0x7400A1: mov     ecx, eax; this
0x7400A3: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x7400A8: mov     ebp, eax
0x7400AA: jmp     short loc_7400AE
0x7400AC: xor     ebp, ebp
0x7400AE: mov     edi, [esi+5Ch]
0x7400B1: cmp     edi, ebp
0x7400B3: mov     byte ptr [esp+28h+var_4], 1
0x7400B8: jz      short loc_7400EB
0x7400BA: cmp     edi, ebx
0x7400BC: jz      short loc_7400DA
0x7400BE: lea     eax, [edi+4]
0x7400C1: push    eax; lpAddend
0x7400C2: call    dword ptr ds:0A2807Ch
0x7400C8: test    eax, eax
0x7400CA: jnz     short loc_7400DA
0x7400CC: cmp     edi, ebx
0x7400CE: jz      short loc_7400DA
0x7400D0: mov     edx, [edi]
0x7400D2: mov     eax, [edx]
0x7400D4: push    1
0x7400D6: mov     ecx, edi
0x7400D8: call    eax
0x7400DA: cmp     ebp, ebx
0x7400DC: mov     [esi+5Ch], ebp
0x7400DF: jz      short loc_7400EB
0x7400E1: add     ebp, 4
0x7400E4: push    ebp; lpAddend
0x7400E5: call    dword ptr ds:0A28078h
0x7400EB: mov     [esi+60h], bl
0x7400EE: mov     eax, esi
0x7400F0: mov     ecx, dword ptr [esp+28h+var_C]
0x7400F4: mov     large fs:0, ecx
0x7400FB: pop     ecx
0x7400FC: pop     edi
0x7400FD: pop     esi
0x7400FE: pop     ebp
0x7400FF: pop     ebx
0x740100: add     esp, 14h
0x740103: retn
