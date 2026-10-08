0x424510: push    0FFFFFFFFh
0x424512: push    offset SEH_424510
0x424517: mov     eax, large fs:0
0x42451D: push    eax
0x42451E: push    ecx
0x42451F: push    esi
0x424520: mov     eax, ___security_cookie
0x424525: xor     eax, esp
0x424527: push    eax
0x424528: lea     eax, [esp+18h+var_C]
0x42452C: mov     large fs:0, eax
0x424532: mov     esi, ecx
0x424534: mov     [esp+18h+var_10], esi
0x424538: xor     eax, eax
0x42453A: mov     byte ptr [esi+4], 0Ah
0x42453E: mov     [esi+8], eax
0x424541: lea     ecx, [esi+0Ch]; this
0x424544: mov     dword ptr [esi], offset ??_7ExtraEditorID@@6B@; const ExtraEditorID::`vftable'
0x42454A: mov     [esp+18h+var_4], eax
0x42454E: mov     [ecx], eax
0x424550: mov     [ecx+4], ax
0x424554: mov     [ecx+6], ax
0x424558: push    eax; a3
0x424559: mov     eax, [esp+1Ch+a2]
0x42455D: push    eax; a2
0x42455E: mov     byte ptr [esp+20h+var_4], 1
0x424563: call    BSStringT_Set
0x424568: mov     eax, esi
0x42456A: mov     ecx, [esp+18h+var_C]
0x42456E: mov     large fs:0, ecx
0x424575: pop     ecx
0x424576: pop     esi
0x424577: add     esp, 10h
0x42457A: retn    4
0x9AB890: mov     ecx, [ebp-10h]; this
0x9AB893: jmp     ??1BSExtraData@@UAE@XZ; BSExtraData::~BSExtraData(void)
0x9AB898: mov     ecx, [ebp-10h]
0x9AB89B: add     ecx, 0Ch; void *
0x9AB89E: jmp     BSStringT_Clear
0x9AB8A3: mov     edx, [esp+arg_4]
0x9AB8A7: lea     eax, [edx-8]
0x9AB8AA: mov     ecx, [edx-0Ch]
0x9AB8AD: xor     ecx, eax
0x9AB8AF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB8B4: mov     eax, offset stru_AD86E4
0x9AB8B9: jmp     ___CxxFrameHandler3
