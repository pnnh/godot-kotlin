/* sfxtextedit.cpp */

#include "sfxtextedit.h"

void SFXTextEdit::add(int p_value) {
    count += p_value + 1;
}

void SFXTextEdit::reset() {
    count = 0;
}

int SFXTextEdit::get_total() const {
    return count;
}

void SFXTextEdit::_bind_methods() {
    ClassDB::bind_method(D_METHOD("add", "value"), &SFXTextEdit::add);
    ClassDB::bind_method(D_METHOD("reset"), &SFXTextEdit::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &SFXTextEdit::get_total);
}

SFXTextEdit::SFXTextEdit() {
    count = 0;
}