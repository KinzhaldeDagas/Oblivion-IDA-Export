0x9A1BB0: push    0FFFFFFFFh
0x9A1BB2: push    offset SEH_9A1BB0
0x9A1BB7: mov     eax, large fs:0
0x9A1BBD: push    eax
0x9A1BBE: push    ecx
0x9A1BBF: push    esi
0x9A1BC0: push    edi
0x9A1BC1: mov     eax, ___security_cookie
0x9A1BC6: xor     eax, esp
0x9A1BC8: push    eax
0x9A1BC9: lea     eax, [esp+1Ch+var_C]
0x9A1BCD: mov     large fs:0, eax
0x9A1BD3: mov     esi, ecx
0x9A1BD5: mov     [esp+1Ch+var_10], esi
0x9A1BD9: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x9A1BDE: mov     dword ptr [esi], offset ??_7NiTexture@@6B@; const NiTexture::`vftable'
0x9A1BE4: mov     dword ptr [esi+18h], 6
0x9A1BEB: mov     dword ptr [esi+1Ch], 3
0x9A1BF2: mov     dword ptr [esi+20h], 2
0x9A1BF9: xor     edi, edi
0x9A1BFB: mov     ecx, esi
0x9A1BFD: mov     [esi+24h], edi
0x9A1C00: call    sub_701B00
0x9A1C05: mov     [esi+30h], edi
0x9A1C08: push    offset sub_7016A0; a5
0x9A1C0D: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x9A1C12: push    6; size
0x9A1C14: push    4; a2
0x9A1C16: lea     eax, [esi+44h]
0x9A1C19: push    eax; a1
0x9A1C1A: mov     [esp+30h+var_4], edi
0x9A1C1E: mov     dword ptr [esi], offset ??_7NiRenderedCubeMap@@6B@; const NiRenderedCubeMap::`vftable'
0x9A1C24: call    ArrayConstructor
0x9A1C29: mov     [esi+40h], edi
0x9A1C2C: mov     eax, esi
0x9A1C2E: mov     ecx, [esp+1Ch+var_C]
0x9A1C32: mov     large fs:0, ecx
0x9A1C39: pop     ecx
0x9A1C3A: pop     edi
0x9A1C3B: pop     esi
0x9A1C3C: add     esp, 10h
0x9A1C3F: retn
