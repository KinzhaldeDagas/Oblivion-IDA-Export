0x897B00: push    0FFFFFFFFh
0x897B02: push    offset ??1bhkNiCollisionObject@@UAE@XZ_SEH
0x897B07: mov     eax, large fs:0
0x897B0D: push    eax
0x897B0E: push    ecx
0x897B0F: push    esi
0x897B10: push    edi
0x897B11: mov     eax, ds:0B30AACh
0x897B16: xor     eax, esp
0x897B18: push    eax
0x897B19: lea     eax, [esp+1Ch+var_C]
0x897B1D: mov     large fs:0, eax
0x897B23: mov     esi, ecx
0x897B25: mov     [esp+1Ch+var_10], esi
0x897B29: mov     dword ptr [esi], offset ??_7bhkNiCollisionObject@@6B@; const bhkNiCollisionObject::`vftable'
0x897B2F: sub     dword ptr ds:0BA7A80h, 1
0x897B36: push    0
0x897B38: mov     [esp+20h+var_4], 1
0x897B40: call    sub_897670
0x897B45: mov     edi, [esi+10h]
0x897B48: test    edi, edi
0x897B4A: mov     byte ptr [esp+1Ch+var_4], 0
0x897B4F: jz      short loc_897B6D
0x897B51: lea     eax, [edi+4]
0x897B54: push    eax; lpAddend
0x897B55: call    dword ptr ds:0A2807Ch
0x897B5B: test    eax, eax
0x897B5D: jnz     short loc_897B6D
0x897B5F: test    edi, edi
0x897B61: jz      short loc_897B6D
0x897B63: mov     edx, [edi]
0x897B65: mov     eax, [edx]
0x897B67: push    1
0x897B69: mov     ecx, edi
0x897B6B: call    eax
0x897B6D: mov     ecx, esi
0x897B6F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x897B77: call    sub_711C80
0x897B7C: mov     ecx, dword ptr [esp+1Ch+var_C]
0x897B80: mov     large fs:0, ecx
0x897B87: pop     ecx
0x897B88: pop     edi
0x897B89: pop     esi
0x897B8A: add     esp, 10h
0x897B8D: retn
