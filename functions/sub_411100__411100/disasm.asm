0x411100: push    esi
0x411101: mov     esi, ecx
0x411103: movzx   eax, word ptr [esi+0B6h]
0x41110A: test    ax, ax
0x41110D: mov     edx, [esi+0DCh]
0x411113: push    edi
0x411114: mov     edi, [edx+1Ch]
0x411117: ja      short loc_41111D
0x411119: xor     ecx, ecx
0x41111B: jmp     short loc_411125
0x41111D: mov     ecx, [esi+0B0h]
0x411123: mov     ecx, [ecx]
0x411125: cmp     edi, ecx
0x411127: jz      short loc_41115A
0x411129: test    ax, ax
0x41112C: ja      short loc_411132
0x41112E: xor     ecx, ecx
0x411130: jmp     short loc_41113A
0x411132: mov     eax, [esi+0B0h]
0x411138: mov     ecx, [eax]
0x41113A: mov     eax, [ecx]
0x41113C: push    1
0x41113E: push    edx
0x41113F: mov     edx, [eax+84h]
0x411145: call    edx
0x411147: fldz
0x411149: push    1; a3
0x41114B: push    ecx
0x41114C: mov     ecx, [esi+0DCh]; this
0x411152: fstp    [esp+10h+a2]; a2
0x411155: call    NiAVObject_UpdateNiAVObject
0x41115A: pop     edi
0x41115B: pop     esi
0x41115C: retn
