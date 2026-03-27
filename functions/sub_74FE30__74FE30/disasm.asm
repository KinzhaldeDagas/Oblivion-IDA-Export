0x74FE30: push    esi
0x74FE31: mov     esi, [esp+4+arg_0]
0x74FE35: push    edi
0x74FE36: push    esi
0x74FE37: mov     edi, ecx
0x74FE39: call    sub_75E480
0x74FE3E: cmp     dword ptr [esi+0D8h], 0A010068h
0x74FE48: jnb     loc_74FF1C
0x74FE4E: push    ebx
0x74FE4F: mov     ecx, esi
0x74FE51: call    sub_7124A0
0x74FE56: mov     esi, eax
0x74FE58: xor     ebx, ebx
0x74FE5A: cmp     esi, ebx
0x74FE5C: jz      loc_74FF16
0x74FE62: push    ebp
0x74FE63: lea     eax, [esi+4]
0x74FE66: push    eax; lpAddend
0x74FE67: call    dword ptr ds:0A28078h
0x74FE6D: push    18h; Size
0x74FE6F: call    FormHeapAlloc
0x74FE74: add     esp, 4
0x74FE77: cmp     eax, ebx
0x74FE79: jz      short loc_74FE87
0x74FE7B: push    ebx
0x74FE7C: mov     ecx, eax
0x74FE7E: call    sub_6D2990
0x74FE83: mov     ebp, eax
0x74FE85: jmp     short loc_74FE89
0x74FE87: xor     ebp, ebp
0x74FE89: mov     eax, [esi+10h]
0x74FE8C: mov     ecx, [esi+8]
0x74FE8F: mov     edx, [esi+0Ch]
0x74FE92: push    eax
0x74FE93: push    ecx
0x74FE94: push    edx
0x74FE95: mov     ecx, ebp
0x74FE97: call    sub_6DE010
0x74FE9C: mov     [esi+8], ebx
0x74FE9F: mov     [esi+0Ch], ebx
0x74FEA2: mov     [esi+10h], ebx
0x74FEA5: mov     [esi+14h], bl
0x74FEA8: mov     eax, [edi]
0x74FEAA: mov     edx, [eax+84h]
0x74FEB0: push    ebx
0x74FEB1: push    ebp
0x74FEB2: mov     ecx, edi
0x74FEB4: call    edx
0x74FEB6: push    18h; Size
0x74FEB8: call    FormHeapAlloc
0x74FEBD: add     esp, 4
0x74FEC0: cmp     eax, ebx
0x74FEC2: jz      short loc_74FED0
0x74FEC4: push    ebx
0x74FEC5: mov     ecx, eax
0x74FEC7: call    sub_6E7F50
0x74FECC: mov     ebp, eax
0x74FECE: jmp     short loc_74FED2
0x74FED0: xor     ebp, ebp
0x74FED2: mov     eax, [esi+18h]
0x74FED5: mov     ecx, [esi+20h]
0x74FED8: mov     edx, [esi+1Ch]
0x74FEDB: push    eax
0x74FEDC: push    ecx
0x74FEDD: push    edx
0x74FEDE: mov     ecx, ebp; this
0x74FEE0: call    ??0NiBoolData@@QAE@XZ; NiBoolData::NiBoolData(void)
0x74FEE5: mov     [esi+18h], ebx
0x74FEE8: mov     [esi+1Ch], ebx
0x74FEEB: mov     [esi+24h], bl
0x74FEEE: mov     eax, [edi]
0x74FEF0: mov     edx, [eax+84h]
0x74FEF6: push    1
0x74FEF8: push    ebp
0x74FEF9: mov     ecx, edi
0x74FEFB: call    edx
0x74FEFD: lea     eax, [esi+4]
0x74FF00: push    eax; lpAddend
0x74FF01: call    dword ptr ds:0A2807Ch
0x74FF07: test    eax, eax
0x74FF09: pop     ebp
0x74FF0A: jnz     short loc_74FF16
0x74FF0C: mov     eax, [esi]
0x74FF0E: mov     edx, [eax]
0x74FF10: push    1
0x74FF12: mov     ecx, esi
0x74FF14: call    edx
0x74FF16: pop     ebx
0x74FF17: pop     edi
0x74FF18: pop     esi
0x74FF19: retn    4
0x74FF1C: test    byte ptr [edi+8], 6
0x74FF20: jnz     short loc_74FF4A
0x74FF22: fldz
0x74FF24: fcomp   dword ptr [edi+10h]
0x74FF27: fnstsw  ax
0x74FF29: test    ah, 44h
0x74FF2C: jp      short loc_74FF4A
0x74FF2E: call    _rand
0x74FF33: mov     [esp+8+arg_0], eax
0x74FF37: fild    [esp+8+arg_0]
0x74FF3B: fdiv    qword ptr ds:0A3D5A8h
0x74FF41: fmul    qword ptr ds:0A309F0h
0x74FF47: fstp    dword ptr [edi+10h]
0x74FF4A: mov     ecx, esi
0x74FF4C: call    sub_7124A0
0x74FF51: push    eax; a2
0x74FF52: lea     ecx, [edi+48h]; this
0x74FF55: call    NiSmartPointer_Set??
0x74FF5A: pop     edi
0x74FF5B: pop     esi
0x74FF5C: retn    4
