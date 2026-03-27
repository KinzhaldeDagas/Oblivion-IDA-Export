0x707CA0: push    0FFFFFFFFh
0x707CA2: push    offset ??1NiAVObject@@UAE@XZ_SEH
0x707CA7: mov     eax, large fs:0
0x707CAD: push    eax
0x707CAE: push    ecx
0x707CAF: push    ebx
0x707CB0: push    ebp
0x707CB1: push    esi
0x707CB2: push    edi
0x707CB3: mov     eax, ds:0B30AACh
0x707CB8: xor     eax, esp
0x707CBA: push    eax
0x707CBB: lea     eax, [esp+24h+var_C]
0x707CBF: mov     large fs:0, eax
0x707CC5: mov     esi, ecx
0x707CC7: mov     [esp+24h+var_10], esi
0x707CCB: mov     dword ptr [esi], offset ??_7NiAVObject@@6B@; const NiAVObject::`vftable'
0x707CD1: lea     ebp, [esi+98h]
0x707CD7: mov     ecx, ebp
0x707CD9: mov     [esp+24h+var_4], 2
0x707CE1: call    NiTPointerList__FreeAllNodes
0x707CE6: mov     edi, [esi+0A8h]
0x707CEC: test    edi, edi
0x707CEE: mov     ebx, ds:0A2807Ch
0x707CF4: jz      short loc_707D18
0x707CF6: lea     eax, [edi+4]
0x707CF9: push    eax; lpAddend
0x707CFA: call    ebx ; InterlockedDecrement
0x707CFC: test    eax, eax
0x707CFE: jnz     short loc_707D0E
0x707D00: test    edi, edi
0x707D02: jz      short loc_707D0E
0x707D04: mov     edx, [edi]
0x707D06: mov     eax, [edx]
0x707D08: push    1
0x707D0A: mov     ecx, edi
0x707D0C: call    eax
0x707D0E: mov     dword ptr [esi+0A8h], 0
0x707D18: mov     edi, [esi+0A8h]
0x707D1E: test    edi, edi
0x707D20: mov     byte ptr [esp+24h+var_4], 1
0x707D25: jz      short loc_707D3F
0x707D27: lea     ecx, [edi+4]
0x707D2A: push    ecx; lpAddend
0x707D2B: call    ebx ; InterlockedDecrement
0x707D2D: test    eax, eax
0x707D2F: jnz     short loc_707D3F
0x707D31: test    edi, edi
0x707D33: jz      short loc_707D3F
0x707D35: mov     edx, [edi]
0x707D37: mov     eax, [edx]
0x707D39: push    1
0x707D3B: mov     ecx, edi
0x707D3D: call    eax
0x707D3F: mov     ecx, ebp
0x707D41: mov     byte ptr [esp+24h+var_4], 0
0x707D46: call    ??1?$NiTPointerList@V?$NiPointer@VNiProperty@@@@@@UAE@XZ; NiTPointerList<NiPointer<NiProperty>>::~NiTPointerList<NiPointer<NiProperty>>(void)
0x707D4B: mov     ecx, esi; this
0x707D4D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x707D55: call    ??1NiDitherProperty@@UAE@XZ; NiDitherProperty::~NiDitherProperty(void)
0x707D5A: mov     ecx, [esp+24h+var_C]
0x707D5E: mov     large fs:0, ecx
0x707D65: pop     ecx
0x707D66: pop     edi
0x707D67: pop     esi
0x707D68: pop     ebp
0x707D69: pop     ebx
0x707D6A: add     esp, 10h
0x707D6D: retn
