0x802540: push    0FFFFFFFFh
0x802542: push    offset ??0BSShader@@QAE@XZ_SEH
0x802547: mov     eax, large fs:0
0x80254D: push    eax
0x80254E: push    ecx
0x80254F: push    esi
0x802550: push    edi
0x802551: mov     eax, ds:0B30AACh
0x802556: xor     eax, esp
0x802558: push    eax
0x802559: lea     eax, [esp+1Ch+var_C]
0x80255D: mov     large fs:0, eax
0x802563: mov     esi, ecx
0x802565: mov     [esp+1Ch+var_10], esi
0x802569: call    ??0NiD3DShader@@QAE@XZ; NiD3DShader::NiD3DShader(void)
0x80256E: push    offset sub_4027D0; a5
0x802573: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x802578: push    1; size
0x80257A: push    4; a2
0x80257C: lea     edi, [esi+70h]
0x80257F: push    edi; a1
0x802580: mov     [esp+30h+var_4], 0
0x802588: mov     dword ptr [esi], offset ??_7BSShader@@6B@; const BSShader::`vftable'
0x80258E: call    ArrayConstructor
0x802593: mov     ecx, [edi]
0x802595: test    ecx, ecx
0x802597: mov     byte ptr [esp+1Ch+var_4], 1
0x80259C: jz      short loc_8025AF
0x80259E: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x8025A2: jnz     short loc_8025A9
0x8025A4: call    sub_7604D0
0x8025A9: mov     dword ptr [edi], 0
0x8025AF: mov     eax, esi
0x8025B1: mov     byte ptr [esi+78h], 0
0x8025B5: mov     ecx, [esp+1Ch+var_C]
0x8025B9: mov     large fs:0, ecx
0x8025C0: pop     ecx
0x8025C1: pop     edi
0x8025C2: pop     esi
0x8025C3: add     esp, 10h
0x8025C6: retn
