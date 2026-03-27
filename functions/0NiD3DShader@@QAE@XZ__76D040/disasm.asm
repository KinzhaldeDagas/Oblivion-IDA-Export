0x76D040: push    ebx
0x76D041: push    esi
0x76D042: push    edi
0x76D043: mov     esi, ecx
0x76D045: call    sub_779070
0x76D04A: xor     ebx, ebx
0x76D04C: mov     dword ptr [esi], offset ??_7NiD3DShader@@6B@; const NiD3DShader::`vftable'
0x76D052: mov     [esi+20h], bl
0x76D055: mov     [esi+21h], bl
0x76D058: mov     [esi+24h], ebx
0x76D05B: mov     [esi+28h], ebx
0x76D05E: mov     [esi+2Ch], ebx
0x76D061: mov     [esi+30h], ebx
0x76D064: push    2
0x76D066: lea     edi, [esi+40h]
0x76D069: mov     [esi+34h], ebx
0x76D06C: mov     [esi+38h], ebx
0x76D06F: push    2
0x76D071: mov     ecx, edi
0x76D073: mov     [esi+3Ch], ebx
0x76D076: call    ??0?$NiTArray@V?$NiPointer@VNiD3DPass@@@@@@QAE@XZ; NiTArray<NiPointer<NiD3DPass>>::NiTArray<NiPointer<NiD3DPass>>(void)
0x76D07B: mov     ecx, edi
0x76D07D: call    sub_76C8C0
0x76D082: pop     edi
0x76D083: mov     [esi+64h], ebx
0x76D086: mov     [esi+68h], ebx
0x76D089: mov     [esi+6Ch], ebx
0x76D08C: mov     dword ptr [esi], offset ??_7NiD3DDefaultShader@@6B@; const NiD3DDefaultShader::`vftable'
0x76D092: mov     eax, esi
0x76D094: pop     esi
0x76D095: pop     ebx
0x76D096: retn
