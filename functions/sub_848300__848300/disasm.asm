0x848300: push    0FFFFFFFFh; Oblivion mode-5 skinned alpha-tested ShadowLight enqueuer. Reuses pool[9], binds shader-property texture 0/BaseMap to stage 0, optionally applies the property address preset, and uses SLS2055/SLS2061.
0x848302: push    offset SEH_851CA0
0x848307: mov     eax, large fs:0
0x84830D: push    eax
0x84830E: push    ecx
0x84830F: push    ebx
0x848310: push    ebp
0x848311: push    esi
0x848312: push    edi
0x848313: mov     eax, ds:0B30AACh
0x848318: xor     eax, esp
0x84831A: push    eax
0x84831B: lea     eax, [esp+24h+var_C]
0x84831F: mov     large fs:0, eax
0x848325: mov     edi, ecx
0x848327: mov     esi, ds:0B455C4h; Pool[9] skinned alpha-tested caster pass. Its single texture stage receives shader-property texture index 0/BaseMap.
0x84832D: mov     eax, [esi+24h]
0x848330: mov     ecx, [esp+24h+value]
0x848334: mov     edx, [ecx]
0x848336: mov     ebp, [eax]
0x848338: mov     eax, [edx+88h]
0x84833E: push    0
0x848340: call    eax
0x848342: mov     ebx, [ebp+4]
0x848345: cmp     ebx, eax
0x848347: mov     [esp+24h+var_10], eax
0x84834B: jz      short loc_848382
0x84834D: test    ebx, ebx
0x84834F: jz      short loc_848371
0x848351: lea     ecx, [ebx+4]
0x848354: push    ecx; lpAddend
0x848355: call    dword ptr ds:0A2807Ch
0x84835B: test    eax, eax
0x84835D: jnz     short loc_84836D
0x84835F: test    ebx, ebx
0x848361: jz      short loc_84836D
0x848363: mov     edx, [ebx]
0x848365: mov     eax, [edx]
0x848367: push    1
0x848369: mov     ecx, ebx
0x84836B: call    eax
0x84836D: mov     eax, [esp+24h+var_10]
0x848371: test    eax, eax
0x848373: mov     [ebp+4], eax
0x848376: jz      short loc_848382
0x848378: add     eax, 4
0x84837B: push    eax; lpAddend
0x84837C: call    dword ptr ds:0A28078h
0x848382: mov     ecx, [esp+24h+value]
0x848386: push    ecx
0x848387: push    ebp
0x848388: mov     ecx, edi
0x84838A: call    sub_848FA0
0x84838F: mov     ebx, 1
0x848394: add     [esi+60h], ebx
0x848397: mov     [esp+24h+value], esi
0x84839B: mov     eax, [edi+38h]
0x84839E: lea     edx, [esp+24h+value]
0x8483A2: push    edx; value
0x8483A3: push    eax; index
0x8483A4: lea     ecx, [edi+40h]; this
0x8483A7: mov     [esp+2Ch+var_4], 0
0x8483AF: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x8483B4: or      eax, 0FFFFFFFFh
0x8483B7: add     [esi+60h], eax
0x8483BA: mov     [esp+24h+var_4], eax
0x8483BE: jnz     short loc_8483C7
0x8483C0: mov     ecx, esi
0x8483C2: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x8483C7: add     [edi+38h], ebx
0x8483CA: mov     ecx, [esp+24h+var_C]
0x8483CE: mov     large fs:0, ecx
0x8483D5: pop     ecx
0x8483D6: pop     edi
0x8483D7: pop     esi
0x8483D8: pop     ebp
0x8483D9: pop     ebx
0x8483DA: add     esp, 10h
0x8483DD: retn    10h
0x9D3360: lea     ecx, [ebp+10h]; void *
0x9D3363: jmp     sub_4027D0
0x9D3368: mov     edx, [esp+arg_4]
0x9D336C: lea     eax, [edx-14h]
0x9D336F: mov     ecx, [edx-18h]
0x9D3372: xor     ecx, eax
0x9D3374: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3379: mov     eax, offset stru_AFB794
0x9D337E: jmp     ___CxxFrameHandler3
