0x910040: push    ebp
0x910041: mov     ebp, esp
0x910043: and     esp, 0FFFFFFF0h
0x910046: sub     esp, 0Ch
0x910049: mov     eax, [ebp+arg_8]
0x91004C: mov     edx, [ebp+arg_0]
0x91004F: push    esi
0x910050: mov     esi, ecx
0x910052: mov     ecx, [ebp+arg_4]
0x910055: push    eax
0x910056: push    ecx
0x910057: push    edx
0x910058: mov     ecx, esi
0x91005A: call    sub_8E7B70
0x91005F: xorps   xmm0, xmm0
0x910062: mov     dword ptr [esi], offset off_A9CBA0
0x910068: mov     dword ptr [esi+40h], 3DCCCCCDh
0x91006F: mov     dword ptr [esi+44h], 3C23D70Ah
0x910076: movaps  xmmword ptr [esi+20h], xmm0
0x91007A: movaps  xmmword ptr [esi+30h], xmm0
0x91007E: mov     eax, esi
0x910080: pop     esi
0x910081: mov     esp, ebp
0x910083: pop     ebp
0x910084: retn    0Ch
