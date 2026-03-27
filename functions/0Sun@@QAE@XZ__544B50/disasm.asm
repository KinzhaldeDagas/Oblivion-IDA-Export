0x544B50: push    0FFFFFFFFh
0x544B52: push    offset ??1Sun@@UAE@XZ_SEH
0x544B57: mov     eax, large fs:0
0x544B5D: push    eax
0x544B5E: push    ecx
0x544B5F: push    ebx
0x544B60: push    ebp
0x544B61: push    esi
0x544B62: push    edi
0x544B63: mov     eax, ds:0B30AACh
0x544B68: xor     eax, esp
0x544B6A: push    eax
0x544B6B: lea     eax, [esp+24h+var_C]
0x544B6F: mov     large fs:0, eax
0x544B75: mov     esi, ecx
0x544B77: mov     [esp+24h+var_10], esi
0x544B7B: call    ??0SkyObject@@QAE@XZ; SkyObject::SkyObject(void)
0x544B80: xor     ebx, ebx
0x544B82: mov     dword ptr [esi], offset ??_7Sun@@6B@; const Sun::`vftable'
0x544B88: mov     [esp+24h+var_4], ebx
0x544B8C: mov     [esi+8], ebx
0x544B8F: mov     [esi+0Ch], ebx
0x544B92: mov     [esi+10h], ebx
0x544B95: mov     [esi+14h], ebx
0x544B98: mov     [esi+1Ch], ebx
0x544B9B: mov     edi, [esi+4]
0x544B9E: cmp     edi, ebx
0x544BA0: mov     ebp, ds:0A2807Ch
0x544BA6: mov     byte ptr [esp+24h+var_4], 5
0x544BAB: jz      short loc_544BC8
0x544BAD: lea     eax, [edi+4]
0x544BB0: push    eax; lpAddend
0x544BB1: call    ebp ; InterlockedDecrement
0x544BB3: test    eax, eax
0x544BB5: jnz     short loc_544BC5
0x544BB7: cmp     edi, ebx
0x544BB9: jz      short loc_544BC5
0x544BBB: mov     edx, [edi]
0x544BBD: mov     eax, [edx]
0x544BBF: push    1
0x544BC1: mov     ecx, edi
0x544BC3: call    eax
0x544BC5: mov     [esi+4], ebx
0x544BC8: mov     edi, [esi+8]
0x544BCB: cmp     edi, ebx
0x544BCD: jz      short loc_544BEA
0x544BCF: lea     ecx, [edi+4]
0x544BD2: push    ecx; lpAddend
0x544BD3: call    ebp ; InterlockedDecrement
0x544BD5: test    eax, eax
0x544BD7: jnz     short loc_544BE7
0x544BD9: cmp     edi, ebx
0x544BDB: jz      short loc_544BE7
0x544BDD: mov     edx, [edi]
0x544BDF: mov     eax, [edx]
0x544BE1: push    1
0x544BE3: mov     ecx, edi
0x544BE5: call    eax
0x544BE7: mov     [esi+8], ebx
0x544BEA: mov     edi, [esi+0Ch]
0x544BED: cmp     edi, ebx
0x544BEF: jz      short loc_544C0C
0x544BF1: lea     ecx, [edi+4]
0x544BF4: push    ecx; lpAddend
0x544BF5: call    ebp ; InterlockedDecrement
0x544BF7: test    eax, eax
0x544BF9: jnz     short loc_544C09
0x544BFB: cmp     edi, ebx
0x544BFD: jz      short loc_544C09
0x544BFF: mov     edx, [edi]
0x544C01: mov     eax, [edx]
0x544C03: push    1
0x544C05: mov     ecx, edi
0x544C07: call    eax
0x544C09: mov     [esi+0Ch], ebx
0x544C0C: mov     edi, [esi+10h]
0x544C0F: cmp     edi, ebx
0x544C11: jz      short loc_544C2E
0x544C13: lea     ecx, [edi+4]
0x544C16: push    ecx; lpAddend
0x544C17: call    ebp ; InterlockedDecrement
0x544C19: test    eax, eax
0x544C1B: jnz     short loc_544C2B
0x544C1D: cmp     edi, ebx
0x544C1F: jz      short loc_544C2B
0x544C21: mov     edx, [edi]
0x544C23: mov     eax, [edx]
0x544C25: push    1
0x544C27: mov     ecx, edi
0x544C29: call    eax
0x544C2B: mov     [esi+10h], ebx
0x544C2E: mov     edi, [esi+14h]
0x544C31: cmp     edi, ebx
0x544C33: jz      short loc_544C50
0x544C35: lea     ecx, [edi+4]
0x544C38: push    ecx; lpAddend
0x544C39: call    ebp ; InterlockedDecrement
0x544C3B: test    eax, eax
0x544C3D: jnz     short loc_544C4D
0x544C3F: cmp     edi, ebx
0x544C41: jz      short loc_544C4D
0x544C43: mov     edx, [edi]
0x544C45: mov     eax, [edx]
0x544C47: push    1
0x544C49: mov     ecx, edi
0x544C4B: call    eax
0x544C4D: mov     [esi+14h], ebx
0x544C50: mov     edi, [esi+1Ch]
0x544C53: cmp     edi, ebx
0x544C55: jz      short loc_544C72
0x544C57: lea     ecx, [edi+4]
0x544C5A: push    ecx; lpAddend
0x544C5B: call    ebp ; InterlockedDecrement
0x544C5D: test    eax, eax
0x544C5F: jnz     short loc_544C6F
0x544C61: cmp     edi, ebx
0x544C63: jz      short loc_544C6F
0x544C65: mov     edx, [edi]
0x544C67: mov     eax, [edx]
0x544C69: push    1
0x544C6B: mov     ecx, edi
0x544C6D: call    eax
0x544C6F: mov     [esi+1Ch], ebx
0x544C72: fldz
0x544C74: mov     [esi+18h], ebx
0x544C77: fstp    dword ptr [esi+20h]
0x544C7A: mov     [esi+24h], bl
0x544C7D: mov     eax, esi
0x544C7F: mov     ecx, dword ptr [esp+24h+var_C]
0x544C83: mov     large fs:0, ecx
0x544C8A: pop     ecx
0x544C8B: pop     edi
0x544C8C: pop     esi
0x544C8D: pop     ebp
0x544C8E: pop     ebx
0x544C8F: add     esp, 10h
0x544C92: retn
