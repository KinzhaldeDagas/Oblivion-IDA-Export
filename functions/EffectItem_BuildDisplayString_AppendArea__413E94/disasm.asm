0x413E94: mov     eax, sMagicEffectItemFeet
0x413E99: push    eax
0x413E9A: mov     ecx, esi
0x413E9C: call    EffectItem_GetArea
0x413EA1: mov     ecx, sMagicEffectItemIn
0x413EA7: push    eax
0x413EA8: push    ecx
0x413EA9: lea     edx, [esp+0Ch+arg_20]
0x413EAD: push    offset aSDS; " %s %d %s"
0x413EB2: push    edx
0x413EB3: call    __sprintf
0x413EB8: add     esp, 14h
0x413EBB: lea     eax, [esp+arg_20]
0x413EBF: push    eax
0x413EC0: mov     ecx, edi
0x413EC2: call    BSStringT_Append
