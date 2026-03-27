0x7AA280: sub     esp, 0Ch
0x7AA283: fldz
0x7AA285: push    ebx
0x7AA286: push    ebp
0x7AA287: fst     [esp+14h+var_8]
0x7AA28B: push    esi
0x7AA28C: push    edi
0x7AA28D: mov     edi, ecx
0x7AA28F: xor     ebx, ebx
0x7AA291: mov     [esp+1Ch+var_4], 7FFFFFFFh
0x7AA299: mov     [esp+1Ch+var_9], 1
0x7AA29E: xor     ebp, ebp
0x7AA2A0: lea     esi, [edi+0D4h]
0x7AA2A6: cmp     byte ptr [esi-8], 0
0x7AA2AA: jz      short loc_7AA2CE
0x7AA2AC: push    ebp
0x7AA2AD: fstp    st
0x7AA2AF: mov     ecx, edi
0x7AA2B1: call    sub_7A99F0
0x7AA2B6: fldz
0x7AA2B8: cmp     byte ptr [esi-8], 0
0x7AA2BC: jz      short loc_7AA2CE
0x7AA2BE: add     dword ptr [esi+4], 1
0x7AA2C2: mov     byte ptr [edi+0C0h], 1
0x7AA2C9: mov     [esp+1Ch+var_9], 0
0x7AA2CE: fcom    dword ptr [esi-4]
0x7AA2D1: fnstsw  ax
0x7AA2D3: test    ah, 5
0x7AA2D6: jnp     short loc_7AA2DD
0x7AA2D8: cmp     dword ptr [esi], 0
0x7AA2DB: jbe     short loc_7AA300
0x7AA2DD: mov     eax, [esi]
0x7AA2DF: cmp     eax, [esp+1Ch+var_4]
0x7AA2E3: jnb     short loc_7AA2E9
0x7AA2E5: mov     [esp+1Ch+var_4], eax
0x7AA2E9: fld     dword ptr [esi-4]
0x7AA2EC: fld     [esp+1Ch+var_8]
0x7AA2F0: fcompp
0x7AA2F2: fnstsw  ax
0x7AA2F4: test    ah, 5
0x7AA2F7: jp      short loc_7AA300
0x7AA2F9: fld     dword ptr [esi-4]
0x7AA2FC: fstp    [esp+1Ch+var_8]
0x7AA300: add     ebx, [esi+4]
0x7AA303: add     ebp, 1
0x7AA306: add     esi, 14h
0x7AA309: cmp     ebp, 3
0x7AA30C: jl      short loc_7AA2A6
0x7AA30E: cmp     [esp+1Ch+var_9], 0
0x7AA313: jz      short loc_7AA371
0x7AA315: mov     eax, [esp+1Ch+var_4]
0x7AA319: fld     [esp+1Ch+var_8]
0x7AA31D: cmp     eax, 0Ah
0x7AA320: fstp    dword ptr [edi+0C4h]
0x7AA326: mov     byte ptr [edi+0C0h], 0
0x7AA32D: jnb     short loc_7AA337
0x7AA32F: fld1
0x7AA331: fstp    dword ptr [edi+0C4h]
0x7AA337: mov     [edi+0BCh], eax
0x7AA33D: mov     ds:0B42CC0h, ebx
0x7AA343: fst     dword ptr [edi+0D0h]
0x7AA349: xor     eax, eax
0x7AA34B: fst     dword ptr [edi+0E4h]
0x7AA351: fstp    dword ptr [edi+0F8h]
0x7AA357: mov     [edi+0D4h], eax
0x7AA35D: mov     [edi+0E8h], eax
0x7AA363: mov     [edi+0FCh], eax
0x7AA369: pop     edi
0x7AA36A: pop     esi
0x7AA36B: pop     ebp
0x7AA36C: pop     ebx
0x7AA36D: add     esp, 0Ch
0x7AA370: retn
0x7AA371: pop     edi
0x7AA372: fstp    st
0x7AA374: pop     esi
0x7AA375: pop     ebp
0x7AA376: pop     ebx
0x7AA377: add     esp, 0Ch
0x7AA37A: retn
