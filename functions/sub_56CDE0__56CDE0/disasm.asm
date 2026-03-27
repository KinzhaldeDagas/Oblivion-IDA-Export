0x56CDE0: push    0FFFFFFFFh
0x56CDE2: push    offset SEH_56CDE0
0x56CDE7: mov     eax, large fs:0
0x56CDED: push    eax
0x56CDEE: push    ecx
0x56CDEF: push    ebx
0x56CDF0: push    esi
0x56CDF1: push    edi
0x56CDF2: mov     eax, ds:0B30AACh
0x56CDF7: xor     eax, esp
0x56CDF9: push    eax
0x56CDFA: lea     eax, [esp+20h+var_C]
0x56CDFE: mov     large fs:0, eax
0x56CE04: mov     esi, ecx
0x56CE06: mov     [esp+20h+var_10], esi
0x56CE0A: fldz
0x56CE0C: push    ecx
0x56CE0D: fstp    [esp+24h+var_24]; float
0x56CE10: xor     ebx, ebx
0x56CE12: push    ebx; int
0x56CE13: call    BSTempEff_constr
0x56CE18: mov     dword ptr [esi], offset ??_7BSTempEffectGeometryDecal@@6B@; const BSTempEffectGeometryDecal::`vftable'
0x56CE1E: mov     [esp+20h+var_4], ebx
0x56CE22: mov     [esi+1Ch], ebx
0x56CE25: mov     [esi+2Ch], ebx
0x56CE28: mov     [esi+30h], ebx
0x56CE2B: mov     [esi+28h], bl
0x56CE2E: mov     [esi+18h], ebx
0x56CE31: mov     edi, [esi+1Ch]
0x56CE34: cmp     edi, ebx
0x56CE36: mov     byte ptr [esp+20h+var_4], 3
0x56CE3B: jz      short loc_56CE5C
0x56CE3D: lea     eax, [edi+4]
0x56CE40: push    eax; lpAddend
0x56CE41: call    dword ptr ds:0A2807Ch
0x56CE47: test    eax, eax
0x56CE49: jnz     short loc_56CE59
0x56CE4B: cmp     edi, ebx
0x56CE4D: jz      short loc_56CE59
0x56CE4F: mov     edx, [edi]
0x56CE51: mov     eax, [edx]
0x56CE53: push    1
0x56CE55: mov     ecx, edi
0x56CE57: call    eax
0x56CE59: mov     [esi+1Ch], ebx
0x56CE5C: mov     [esi+24h], ebx
0x56CE5F: mov     [esi+20h], ebx
0x56CE62: mov     eax, esi
0x56CE64: mov     ecx, dword ptr [esp+20h+var_C]
0x56CE68: mov     large fs:0, ecx
0x56CE6F: pop     ecx
0x56CE70: pop     edi
0x56CE71: pop     esi
0x56CE72: pop     ebx
0x56CE73: add     esp, 10h
0x56CE76: retn
