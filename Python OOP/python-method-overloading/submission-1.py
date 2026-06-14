class TextProcessor:
    # Implement method overloading for format_text method
    def format_text(self, text1: str, text2: str = None) -> str:
        res = ""
        if text2 == None:
            res = text1.upper()
        else:
            res = text1 + text2
        return res


# Don't modify the code below
processor = TextProcessor()
print(processor.format_text("hello"))
print(processor.format_text("hello", "world"))
