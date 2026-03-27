0x6DC6A0: push    0FFFFFFFFh
0x6DC6A2: push    offset SEH_8C8970
0x6DC6A7: mov     eax, large fs:0
0x6DC6AD: push    eax
0x6DC6AE: push    ecx
0x6DC6AF: push    esi
0x6DC6B0: push    edi
0x6DC6B1: mov     eax, ds:0B30AACh
0x6DC6B6: xor     eax, esp
0x6DC6B8: push    eax
0x6DC6B9: lea     eax, [esp+1Ch+var_C]
0x6DC6BD: mov     large fs:0, eax
0x6DC6C3: mov     edi, ecx
0x6DC6C5: push    5Ch ; '\'; Size
0x6DC6C7: call    FormHeapAlloc
0x6DC6CC: add     esp, 4
0x6DC6CF: mov     [esp+1Ch+var_10], eax
0x6DC6D3: xor     esi, esi
0x6DC6D5: cmp     eax, esi
0x6DC6D7: mov     [esp+1Ch+var_4], esi
0x6DC6DB: jz      short loc_6DC6E8
0x6DC6DD: push    esi
0x6DC6DE: push    esi
0x6DC6DF: mov     ecx, eax; this
0x6DC6E1: call    ??0NiPathInterpolator@@QAE@XZ; NiPathInterpolator::NiPathInterpolator(void)
0x6DC6E6: mov     esi, eax
0x6DC6E8: mov     eax, [esp+1Ch+arg_0]
0x6DC6EC: push    eax
0x6DC6ED: push    esi
0x6DC6EE: mov     ecx, edi
0x6DC6F0: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6DC6F8: call    sub_6DC480
0x6DC6FD: mov     eax, esi
0x6DC6FF: mov     ecx, [esp+1Ch+var_C]
0x6DC703: mov     large fs:0, ecx
0x6DC70A: pop     ecx
0x6DC70B: pop     edi
0x6DC70C: pop     esi
0x6DC70D: add     esp, 10h
0x6DC710: retn    4
