0x8B8E70: push    ebp
0x8B8E71: mov     ebp, esp
0x8B8E73: and     esp, 0FFFFFFF0h
0x8B8E76: sub     esp, 14h
0x8B8E79: push    ebx
0x8B8E7A: mov     ebx, [ebp+arg_0]
0x8B8E7D: push    esi
0x8B8E7E: mov     esi, ecx
0x8B8E80: mov     eax, [esi]
0x8B8E82: mov     edx, [eax+74h]
0x8B8E85: push    edi
0x8B8E86: mov     edi, [ebp+arg_4]
0x8B8E89: lea     ecx, [esp+20h+var_5]
0x8B8E8D: push    ecx
0x8B8E8E: mov     ecx, esi
0x8B8E90: call    edx
0x8B8E92: mov     ecx, eax
0x8B8E94: test    ecx, ecx
0x8B8E96: jz      short loc_8B8EDB
0x8B8E98: movaps  xmm0, xmmword ptr [esi+20h]
0x8B8E9C: movaps  xmmword ptr [ecx+40h], xmm0
0x8B8EA0: movaps  xmm0, xmmword ptr [esi+30h]
0x8B8EA4: movaps  xmmword ptr [ecx+30h], xmm0
0x8B8EA8: fld     dword ptr [edi+10h]
0x8B8EAB: fstp    [esp+20h+var_4]
0x8B8EAF: fld1
0x8B8EB1: fcomp   [esp+20h+var_4]
0x8B8EB5: fnstsw  ax
0x8B8EB7: test    ah, 44h
0x8B8EBA: jnp     short loc_8B8EDB
0x8B8EBC: movss   xmm1, [esp+20h+var_4]
0x8B8EC2: xorps   xmm0, xmm0
0x8B8EC5: movss   xmm0, xmm1
0x8B8EC9: movaps  xmm1, xmm0
0x8B8ECC: shufps  xmm1, xmm0, 0
0x8B8ED0: movaps  xmm0, xmmword ptr [ecx+30h]
0x8B8ED4: mulps   xmm1, xmm0
0x8B8ED7: movaps  xmmword ptr [ecx+30h], xmm1
0x8B8EDB: push    edi
0x8B8EDC: push    ebx
0x8B8EDD: mov     ecx, esi
0x8B8EDF: call    sub_8A4E30
0x8B8EE4: pop     edi
0x8B8EE5: pop     esi
0x8B8EE6: pop     ebx
0x8B8EE7: mov     esp, ebp
0x8B8EE9: pop     ebp
0x8B8EEA: retn    8
