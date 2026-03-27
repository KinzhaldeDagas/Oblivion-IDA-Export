0x9A20A0: push    0FFFFFFFFh
0x9A20A2: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x9A20A7: mov     eax, large fs:0
0x9A20AD: push    eax
0x9A20AE: push    ecx
0x9A20AF: push    esi
0x9A20B0: push    edi
0x9A20B1: mov     eax, ___security_cookie
0x9A20B6: xor     eax, esp
0x9A20B8: push    eax
0x9A20B9: lea     eax, [esp+1Ch+var_C]
0x9A20BD: mov     large fs:0, eax
0x9A20C3: mov     esi, ecx
0x9A20C5: mov     [esp+1Ch+var_10], esi
0x9A20C9: call    NiObject_constr
0x9A20CE: push    offset sub_7016A0; a5
0x9A20D3: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x9A20D8: push    4; size
0x9A20DA: push    4; a2
0x9A20DC: lea     eax, [esi+8]
0x9A20DF: xor     edi, edi
0x9A20E1: push    eax; a1
0x9A20E2: mov     [esp+30h+var_4], edi
0x9A20E6: mov     dword ptr [esi], offset ??_7NiRenderTargetGroup@@6B@; const NiRenderTargetGroup::`vftable'
0x9A20EC: call    ArrayConstructor
0x9A20F1: mov     [esi+18h], edi
0x9A20F4: mov     [esi+1Ch], edi
0x9A20F7: mov     [esi+20h], edi
0x9A20FA: mov     eax, esi
0x9A20FC: mov     ecx, [esp+1Ch+var_C]
0x9A2100: mov     large fs:0, ecx
0x9A2107: pop     ecx
0x9A2108: pop     edi
0x9A2109: pop     esi
0x9A210A: add     esp, 10h
0x9A210D: retn
