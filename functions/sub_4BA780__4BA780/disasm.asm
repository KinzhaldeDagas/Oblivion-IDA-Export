0x4BA780: push    0FFFFFFFFh
0x4BA782: push    offset SEH_4BA780
0x4BA787: mov     eax, large fs:0
0x4BA78D: push    eax
0x4BA78E: sub     esp, 118h
0x4BA794: mov     eax, ds:0B30AACh
0x4BA799: xor     eax, esp
0x4BA79B: mov     [esp+124h+var_10], eax
0x4BA7A2: push    ebx
0x4BA7A3: push    ebp
0x4BA7A4: push    esi
0x4BA7A5: push    edi
0x4BA7A6: mov     eax, ds:0B30AACh
0x4BA7AB: xor     eax, esp
0x4BA7AD: push    eax
0x4BA7AE: lea     eax, [esp+138h+var_C]
0x4BA7B5: mov     large fs:0, eax
0x4BA7BB: xor     esi, esi
0x4BA7BD: mov     [esp+138h+a2], esi
0x4BA7C1: fldz
0x4BA7C3: mov     ebp, ecx
0x4BA7C5: fcom    dword ptr [ebp+78h]
0x4BA7C8: fnstsw  ax
0x4BA7CA: test    ah, 5
0x4BA7CD: jp      short loc_4BA7DF
0x4BA7CF: fld     dword ptr [ebp+78h]
0x4BA7D2: fcomp   qword ptr ds:0A37478h
0x4BA7D8: fnstsw  ax
0x4BA7DA: test    ah, 41h
0x4BA7DD: jnp     short loc_4BA829
0x4BA7DF: fcomp   dword ptr [ebp+7Ch]
0x4BA7E2: fnstsw  ax
0x4BA7E4: test    ah, 5
0x4BA7E7: jp      short loc_4BA7F9
0x4BA7E9: fld     dword ptr ds:0A44F64h
0x4BA7EF: fcomp   dword ptr [ebp+7Ch]
0x4BA7F2: fnstsw  ax
0x4BA7F4: test    ah, 1
0x4BA7F7: jz      short loc_4BA82B
0x4BA7F9: lea     eax, [esp+138h+ArgList]
0x4BA7FD: push    eax
0x4BA7FE: call    sub_4B9C40
0x4BA803: mov     ecx, ds:0B333A0h
0x4BA809: cmp     ecx, esi
0x4BA80B: jz      short loc_4BA832
0x4BA80D: push    esi; char
0x4BA80E: push    esi; char
0x4BA80F: lea     edx, [esp+140h+ArgList]
0x4BA813: push    edx; ArgList
0x4BA814: lea     eax, [esp+144h+var_118]
0x4BA818: push    eax; int
0x4BA819: call    sub_442890
0x4BA81E: mov     esi, [esp+138h+var_124]
0x4BA822: mov     ebx, 1
0x4BA827: jmp     short loc_4BA83F
0x4BA829: fstp    st
0x4BA82B: xor     eax, eax
0x4BA82D: jmp     loc_4BAA4E
0x4BA832: mov     [esp+138h+var_124], esi
0x4BA836: lea     eax, [esp+138h+var_124]
0x4BA83A: mov     ebx, 2
0x4BA83F: mov     edi, [eax]
0x4BA841: test    edi, edi
0x4BA843: mov     [esp+138h+var_124], edi
0x4BA847: jz      short loc_4BA853
0x4BA849: lea     ecx, [edi+4]
0x4BA84C: push    ecx; lpAddend
0x4BA84D: call    dword ptr ds:0A28078h
0x4BA853: test    bl, 2
0x4BA856: mov     [esp+138h+var_4], 1
0x4BA861: jz      short loc_4BA886
0x4BA863: and     ebx, 0FFFFFFFDh
0x4BA866: test    esi, esi
0x4BA868: mov     [esp+138h+a2], ebx
0x4BA86C: jz      short loc_4BA886
0x4BA86E: lea     edx, [esi+4]
0x4BA871: push    edx; lpAddend
0x4BA872: call    dword ptr ds:0A2807Ch
0x4BA878: test    eax, eax
0x4BA87A: jnz     short loc_4BA886
0x4BA87C: mov     eax, [esi]
0x4BA87E: mov     edx, [eax]
0x4BA880: push    1
0x4BA882: mov     ecx, esi
0x4BA884: call    edx
0x4BA886: test    bl, 1
0x4BA889: mov     byte ptr [esp+138h+var_4], 2
0x4BA891: jz      short loc_4BA8B7
0x4BA893: mov     esi, [esp+138h+var_118]
0x4BA897: test    esi, esi
0x4BA899: jz      short loc_4BA8B7
0x4BA89B: lea     eax, [esi+4]
0x4BA89E: push    eax; lpAddend
0x4BA89F: call    dword ptr ds:0A2807Ch
0x4BA8A5: test    eax, eax
0x4BA8A7: jnz     short loc_4BA8B7
0x4BA8A9: test    esi, esi
0x4BA8AB: jz      short loc_4BA8B7
0x4BA8AD: mov     edx, [esi]
0x4BA8AF: mov     eax, [edx]
0x4BA8B1: push    1
0x4BA8B3: mov     ecx, esi
0x4BA8B5: call    eax
0x4BA8B7: test    edi, edi
0x4BA8B9: jz      loc_4BA82B
0x4BA8BF: mov     ecx, [esp+138h+arg_0]
0x4BA8C6: push    ecx
0x4BA8C7: lea     edx, [esp+13Ch+a2]
0x4BA8CB: push    edx
0x4BA8CC: mov     ecx, ebp
0x4BA8CE: call    sub_4BA3C0
0x4BA8D3: mov     bl, 3
0x4BA8D5: push    0C0h ; 'À'; Size
0x4BA8DA: mov     byte ptr [esp+13Ch+var_4], bl
0x4BA8E1: call    FormHeapAlloc
0x4BA8E6: add     esp, 4
0x4BA8E9: mov     [esp+138h+var_11C], eax
0x4BA8ED: test    eax, eax
0x4BA8EF: mov     ebp, [esp+138h+a2]
0x4BA8F3: mov     byte ptr [esp+138h+var_4], 4
0x4BA8FB: jz      short loc_4BA909
0x4BA8FD: push    ebp; a2
0x4BA8FE: mov     ecx, eax; this
0x4BA900: call    NiTriShape_NiTriShape
0x4BA905: mov     edi, eax
0x4BA907: jmp     short loc_4BA90B
0x4BA909: xor     edi, edi
0x4BA90B: push    offset aStbb; "STBB"
0x4BA910: mov     ecx, edi
0x4BA912: mov     byte ptr [esp+13Ch+var_4], bl
0x4BA919: call    NiObjectNET_SetName
0x4BA91E: push    30h ; '0'; Size
0x4BA920: call    FormHeapAlloc
0x4BA925: add     esp, 4
0x4BA928: mov     [esp+138h+var_11C], eax
0x4BA92C: test    eax, eax
0x4BA92E: mov     byte ptr [esp+138h+var_4], 5
0x4BA936: jz      short loc_4BA943
0x4BA938: mov     ecx, eax
0x4BA93A: call    NiTexturingProperty__NiTexturingProperty
0x4BA93F: mov     esi, eax
0x4BA941: jmp     short loc_4BA945
0x4BA943: xor     esi, esi
0x4BA945: mov     eax, [esp+138h+var_124]
0x4BA949: push    eax
0x4BA94A: mov     ecx, esi
0x4BA94C: mov     byte ptr [esp+13Ch+var_4], bl
0x4BA953: call    NiTexturingProperty__SetUnk08
0x4BA958: push    0
0x4BA95A: mov     ecx, esi
0x4BA95C: call    sub_405870
0x4BA961: push    esi; a2
0x4BA962: mov     ecx, edi; this
0x4BA964: call    sub_405680
0x4BA969: push    1
0x4BA96B: call    sub_55F7E0
0x4BA970: add     eax, 14h
0x4BA973: mov     eax, [eax]
0x4BA975: add     esp, 4
0x4BA978: test    eax, eax
0x4BA97A: jz      short loc_4BA984
0x4BA97C: push    eax; a2
0x4BA97D: mov     ecx, edi; this
0x4BA97F: call    sub_405680
0x4BA984: push    0E4h ; 'ä'; Size
0x4BA989: call    FormHeapAlloc
0x4BA98E: mov     esi, eax
0x4BA990: add     esp, 4
0x4BA993: mov     [esp+138h+var_11C], esi
0x4BA997: test    esi, esi
0x4BA999: mov     byte ptr [esp+138h+var_4], 6
0x4BA9A1: jz      short loc_4BA9C5
0x4BA9A3: push    0
0x4BA9A5: mov     ecx, esi; this
0x4BA9A7: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4BA9AC: fldz
0x4BA9AE: fstp    dword ptr [esi+0E0h]
0x4BA9B4: mov     dword ptr [esi], offset ??_7NiBillboardNode@@6B@; const NiBillboardNode::`vftable'
0x4BA9BA: mov     word ptr [esi+0DCh], 9
0x4BA9C3: jmp     short loc_4BA9C7
0x4BA9C5: xor     esi, esi
0x4BA9C7: mov     cx, [esi+0DCh]
0x4BA9CE: mov     edx, [esi]
0x4BA9D0: mov     eax, [edx+84h]
0x4BA9D6: and     cx, 0FFFDh
0x4BA9DB: or      cx, 5
0x4BA9DF: push    1
0x4BA9E1: mov     [esi+0DCh], cx
0x4BA9E8: push    edi
0x4BA9E9: mov     ecx, esi
0x4BA9EB: mov     byte ptr [esp+140h+var_4], bl
0x4BA9F2: call    eax
0x4BA9F4: push    offset aTreeDistant3dB; "Tree distant 3d billboard"
0x4BA9F9: mov     ecx, esi
0x4BA9FB: call    NiObjectNET_SetName
0x4BAA00: test    ebp, ebp
0x4BAA02: mov     byte ptr [esp+138h+var_4], 2
0x4BAA0A: jz      short loc_4BAA25
0x4BAA0C: lea     ecx, [ebp+4]
0x4BAA0F: push    ecx; lpAddend
0x4BAA10: call    dword ptr ds:0A2807Ch
0x4BAA16: test    eax, eax
0x4BAA18: jnz     short loc_4BAA25
0x4BAA1A: mov     edx, [ebp+0]
0x4BAA1D: mov     eax, [edx]
0x4BAA1F: push    1
0x4BAA21: mov     ecx, ebp
0x4BAA23: call    eax
0x4BAA25: mov     edi, [esp+138h+var_124]
0x4BAA29: lea     ecx, [edi+4]
0x4BAA2C: push    ecx; lpAddend
0x4BAA2D: mov     [esp+13Ch+var_4], 0FFFFFFFFh
0x4BAA38: call    dword ptr ds:0A2807Ch
0x4BAA3E: test    eax, eax
0x4BAA40: jnz     short loc_4BAA4C
0x4BAA42: mov     edx, [edi]
0x4BAA44: mov     eax, [edx]
0x4BAA46: push    1
0x4BAA48: mov     ecx, edi
0x4BAA4A: call    eax
0x4BAA4C: mov     eax, esi
0x4BAA4E: mov     ecx, dword ptr [esp+138h+var_C]
0x4BAA55: mov     large fs:0, ecx
0x4BAA5C: pop     ecx
0x4BAA5D: pop     edi
0x4BAA5E: pop     esi
0x4BAA5F: pop     ebp
0x4BAA60: pop     ebx
0x4BAA61: mov     ecx, [esp+124h+var_10]
0x4BAA68: xor     ecx, esp
0x4BAA6A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BAA6F: add     esp, 124h
0x4BAA75: retn    4
