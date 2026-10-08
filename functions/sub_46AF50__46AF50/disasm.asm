0x46AF50: mov     eax, [ecx+0Ch]; Compares only the low 24-bit object-ID portions of this form's FormID and a serialized group label; load-order/master byte is intentionally ignored.
0x46AF53: xor     eax, [esp+candidate_form_id]
0x46AF57: test    eax, 0FFFFFFh
0x46AF5C: setz    al
0x46AF5F: retn    4
