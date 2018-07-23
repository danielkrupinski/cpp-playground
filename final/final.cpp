class Foo final {
};

// class Bar : public Foo { }; error! can't inherit from final function

int main()
{
    Foo foo;
    return 0;
}
